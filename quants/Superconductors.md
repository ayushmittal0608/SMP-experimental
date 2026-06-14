# SuperConductors
Superconductors are those material that can conduct electricity with zero electrical resistance when cooled below a certain critical temperature.

Now, let's consider a normal CMOS transistor, where we have a source and a drain within which lies a gate, now for eg, if I open an app, the millions of electrons start flowing through source towards gate creating a potential difference which is VGS>Vth, now gate is an insulator with capacitive coupling, so it creates an inversion layer through interaction with Si atoms below, which establishes an electric field between source and drain, allowing Id current to flow from drain to source which opens the app.

Now, here we are considering millions of electrons flowing, but what if we use superconductors instead of metalled source and drain, because electrons get heated due to high resistance when collide with metal atoms and so we design an insulated layer of SiO2 in case of CMOS but in case of superconductors, it may allow a large number of electrons to flow from one plate to the other both separated by insulator.

Now, what happens is that let's assume, we are having 2 electrons or let's say 2 qubits, so we consider their initial state as 0, so both of them are |0> and |0> initially, so when we pass an electric field, due to zero resistance, they move and come from their initial state to excited state resulting in 11 from 00, if one is in excited state then 01 or 10, this way through 2 qubits, we will manage to have 4 states. So, such a state transition results in large number of states of given number of units in a nanosecond, which improves the overall computational efficiency of a system, like 4 states in a nanosecond. Can we achieve more by using more superconductors?

Let's figure it out. Let's say we have two states, 0 and 1, they can flip and change state, so it will be like 00, 01, 10 and 11 but let's say we have three states, so what it could be, let's say 0, 0.5 and 1 but how can it be possible as spin is either 0 or 1, actually, we call these electron pairs as cooper pairs, so we are having 3 cooper pairs, now let's assume we pass 0.3A of current and rather than spinning to and fro, it spins from one superconductor to second and then third, now here we won't manage to look upon current distribution as 0 and 0.3A and rather than that, we assume that second state would have got 0.15A of current and then at 0.3A of current, it finally reaches 3rd superconductor and this way, we can manage to have n number of superconductors being connected.

It seems super simple in explanation but it might have too many repercussions and drawbacks that we can't realise when not involved in some experimentation. Having too many flip flops, logic gates and then connecting this layer at too much microscopic level can actually make the process more complicated than we think, because if we more connect ourself to current, we realise that our assumption of taking 0 and 1 state is only limited to how we have taken the state and flip flops and logic gates are just making our system more and more complex.

Experimentation and gaming simulations on how the current flow could connect to the current could emerge out something that we can't ever imagine in our life. We know that we are having 128 ASCII values at present which comes out to be 2^7 which means we need to utilise 7 qubits for assigning each value. Now, the other thing is usage of 7 superconductors where we are passing current to each superconductor which flows exponentially and we can get that ASCII value at any instant of time because if till 7, it is in nanoseconds, so at each interval, it is computing each value within nanoseconds and even much lesser than that.





