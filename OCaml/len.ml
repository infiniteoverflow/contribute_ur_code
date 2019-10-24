(* Find length of a list. Usage: len [a;b;c];; *)
let len list =
    let rec aux n = function
      | [] -> n
      | _::t -> aux (n+1) t
    in aux 0 list;;
