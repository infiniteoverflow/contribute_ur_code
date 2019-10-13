import msvcrt
import socket
import sys
import threading

PORT = 5555
BIND_IP = "0.0.0.0"
CONNECT_IP = "127.0.0.1"

STOP_SERVER_KEY = 27

stop_server = False


def main():
    """
    -----------------------------------------------------------------------
    Runs the client or the server, according to the command line arguments.
    -----------------------------------------------------------------------
    """
    if len(sys.argv) != 2:
        option = ""
    else:
        option = sys.argv[1].strip().lower()

    if option == "client":
        client()
    elif option == "server":
        server()
    else:
        print("Invalid option. The valid options are client and server")


def server():
    """
    -----------------------------------------------------------------------
    Run the server
    -----------------------------------------------------------------------
    """
    global stop_server

    # Start a thread that checks the keystrokes
    thread = threading.Thread(target=stop_server_function)
    thread.start()

    # Start the server
    srv = socket.socket()
    srv.bind((BIND_IP, PORT))
    srv.listen(5)
    srv.settimeout(0.2)
    print("Server is running...\nPress the escape key in order to stop it.")

    # Wait for connections
    while not stop_server:
        try:
            client_socket, client_address = srv.accept()
            thread = threading.Thread(target=handle_client, args=(client_socket,))
            thread.start()
        except socket.timeout:
            pass

    # Close the server
    srv.close()


def handle_client(client_socket):
    """
    -----------------------------------------------------------------------
    Gets the name of the client and sends him a message.

    :param client_socket: The socket of the client
    :type client_socket: socket.socket
    -----------------------------------------------------------------------
    """
    global stop_server

    client_socket.settimeout(0.2)

    # Receive the name of the client and send him a message
    while not stop_server:
        try:
            name = client_socket.recv(1024).decode()
            print(name, "send his name")
            message = str.format("Hello {0}", name).encode()
            client_socket.send(message)
            break
        except (socket.timeout, socket.error):
            pass

    # Close the connection
    client_socket.close()


def stop_server_function():
    """
    -----------------------------------------------------------------------
    Gets input keys until the user press the escape key.
    -----------------------------------------------------------------------
    """
    global stop_server

    # Check the keystrokes
    while not stop_server:
        key = msvcrt.getch().decode()
        print(key, ord(key))
        if ord(key) == STOP_SERVER_KEY:
            stop_server = True


def client():
    """
    -----------------------------------------------------------------------
    Run the client.
    -----------------------------------------------------------------------
    """
    clnt = socket.socket()
    clnt.settimeout(1)

    # Connect to the server
    try:
        clnt.connect((CONNECT_IP, PORT))
    except socket.timeout:
        print("Can't connect to server")
        return

    name = input("Enter your name: ").encode()

    # Send the name, receive a message and close the connection
    try:
        clnt.send(name)
        message = clnt.recv(1024).decode()
        print(message)
    except socket.error:
        print("Connection was lost")
    finally:
        clnt.close()


if __name__ == "__main__":
    main()
