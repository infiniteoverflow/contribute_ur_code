
# A script to implement a simple yes/no dialog in the native shell.
# 
# bash yesno.sh "<text>" [y|n]
# 
# Takes two positional parameters:
# - text: The question to ask, in quotes;
# - default: The default option (y or n) to prefer.
# 
# If a default option has been provided, pressing enter while entering nothing will return the default
# answer. Otherwise, the dialog will be repeated until a suitable answer is provided by the user.
# 
# Returns 0 if "yes", 1 otherwise.
# 
# Example:
# bash yesno.sh "Answer yes to this and X will appear in your terminal!" y && echo X

uppercase() {
    echo "$1" | tr '[:lower:]' '[:upper:]' | tail -n +1
}

yesno() {

    text="$1"
    default="$2"

    default=$(echo $default | grep . || echo ' ')

    answers=$(echo y/n | sed -e "s/$default/`uppercase $default`/")

    question="$text ($answers)"

    while true; do
        read -p "$question"  yn

        case $yn in
            [Yy]|yes) echo "$yn" || $default; return;;
            [Nn]|no) return;;
            *) echo $default | grep . && return || echo;;
        esac

    done
}

yesno "$@" | grep -oi y || exit 1
