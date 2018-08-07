# THICC-RS
The Homemade Integral Code Collection, Reed-Solomon

This is to be a C implementation of a Reed-Solomon error correction library. Code is based on the
project found at https://github.com/Backblaze/JavaReedSolomon. The work here is intended to
provide a faster final product than the original Java implementation built by BackBlaze. This is
a literal translation and all credit and great thanks for the original Java code goes to
Backblaze and the contributors to the repo linked above. This project would not be possible
without the work of those individuals.


Key Conversion Considerations:

1) Literal translation (function to function)
2) Idiotmatic translation (style)
    - Move tables
    - Inline vs. non-inline
3) Organizational translation (API/Usability)
    - Methods (OOP) -> Procedures + structs (modularity)
    - Exposing all functionality
    

The final goal is to produce a functional C implementation of the repo found above. Pure
functionality is the goal for the term, with an emphasis on self-documentation, understanding,
and style. Time permitting, groundwork will be laid for real optimizations.
