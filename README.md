# Jin-Soumya-Xu-cs6903s18project2

## Blockchain <br />
### Run On Command Line Example: <br />
* First: be in the Blockchain directory
* Compile: g++ -o test Block.cpp Blockchain.cpp sha256.cpp main.cpp <br />
* Run Output File: test <br />
#### Resources: <br />
* sha256 code(sha256.h & sha256.cpp) used to hash blocks derived from: <br />
  * http://www.zedwood.com/article/cpp-sha256-function (see LICENSE.txt for more info)<br />

(Designing a cryptography solution to protect your data application from attacks):

The project consists of a software implementation and demonstration of your method to make "your data processing application" secure against attacks that we have studied in this class, including at least the following 3 attacks: data eavesdropping, data modification and data replay. Your project should consist of the following steps:

1) Choose your data processing application; suggestions include the following:

Party1 e-mails a message to Party2,
Party1 posts a web page on the internet that (some or all) other Parties can read,
Party1 posts a blog on an internet page that (some or all) other Parties can read,
Party1 stores on and later retrieves files from a cloud server,
Party1 stores files on a cloud server and later allows other Parties to retrieve (some of) them,
Party1 posts messages and/or files on a social network that (some or all) other Parties can read, 
your favorite web-based data processing application (if approved by the instructor), or
your favorite smartphone-based data processing application (if approved by the instructor).  
2) Analyze how attacks studied in this class, including at least data eavesdropping, data modification and data replay, impact the security, functionality, and/or efficiency of your data processing application; in other words, what can go wrong as a consequence of one or more of these attacks.

3) Design methods to protect your data processing application against as many of these attacks as possible. Your methods should be based on cryptographic primitives studied in our class. 

4) Implement your cryptography methods in any programming language (those choosing C or C++ will receive a small extra credit), based as much as possible on open-source software libraries (e.g., OpenSSL, Crypto++, Miracl, etc.), and combined as much as possible with a real-life data processing application (e.g., a real-life email, cloud storage, web application). Unleash your creativity in performing this combination, with the understanding that any combination will be acceptable. Implement your non-cryptography methods, if any, using your favorite programming language. You are not required to use software from your chosen real-life data processing application (if you do, that's essentially considered extra credit). Your methods should keep the requirements of

data processing functionality (that is, your method should preserve your data processing application's functionality);
confidentiality,
integrity attack detection,
replay attack detection, and
efficiency.
Before starting implementation, you have the (strongly encouraged) option to check your design with the instructor, who will not go over too many details of your design but will tell you if he can see any major design flaws or omissions

5) Prepare a project presentation file (using, for instance, Microsoft Powerpoint) including a detailed description of above steps 1-4, together with a demonstration (using videos or screenshots) of how your methods work in conjunction with the specific real-life data processing application. In your demonstration, you might likely need to run the real-life data processing application. You will give a 10/15-min oral presentation; you can either give it in person at NYU (on the week before finals' week) or record it on NYU Classes (see instructions below; only 1 recording is allowed; this is recommended if you are an online student).

Your submission will be judged based on the following project grading criteria:

1. Application choice (i.e., if you chose a real-life data processing application, how interesting is the application, etc.)
2. Security analysis (i.e., if you analyzed all or at least the most important attacks to the chosen data processing application, etc.)
3. Design validity (i.e., if you chose appropriate cryptographic primitives, if the schemes instantiating the primitives and their key length parameters are valid choices in terms of security and efficiency)
4. Implementation validity (i.e., if your software, after inspection of the presentation demonstration and some amount of testing, seems to satisfy correctness; if your software is easy to use / run, has a well-written readme file, etc.) 
5.  Demonstration/presentation quality (i.e., if the presentation is well written and insightful, if the demonstration is clear and insightful, etc.).

Project type 2 (Implementations and Performance Analysis of State-of-the-Art Advanced Cryptography Solutions):

The project consists of literature review, software implementation and performance analysis of state-of-the-art methods of "advanced cryptographic primitives or protocols" that we have studied or mentioned in this class. Your project should consist of the following steps:

 

1) Choose your advanced cryptographic primitive or protocol; suggestions include the following:

 

Fully homomorphic encryption schemes

Two-party secure function evaluation protocols

Multi-Party secure function evaluation protocols

Attribute-based encryption schemes

Functional encryption schemes

Oblivious Transfer protocols

Blockchain protocols

Program Obfuscation schemes (for a specific program)

Quantum-resistant encryption schemes based on lattices or codes or groups

Quantum-resistant signature schemes based on lattices or codes or groups

Quantum-resistant key agreement protocols based on lattices or codes or groups

Secret sharing schemes

your favorite advanced cryptographic primitive or protocol (if approved by the instructor).

