# Brownian Motion
Brownian Motion is the random, erratic movement of microscopic particles suspended in a fluid resulting from constant collisions with the fast moving molecules of fluid. Now, in an order book, we can buy or sell stocks anytime. In a stock exchange, millions of people have invested heavily in stock exchange due to which we generally say that market is volatile. The volatility of market is predicted by the rate at which price of stocks change. 

Now, let's assume market to be fluid and the price of stock in the market as a microscopic particle which fluctuates on each buying and selling of stock. If we closely notice the nature of price and stock, we infer that it has the same behaviour as that of microscopic particle in fluid, which is exactly same as brownian motion.

Let's say the particle is at position x in time, t which can be represented as $f(x, t)$, and in time, $t+dt$, position of particle is changed from x either to $x+ \delta x$ or $x- \delta x$, now with such change will be the probability spread across $\delta$. Now, the particle is moving again and again either with a wave like nature i.e. to and fro or particle like nature i.e. displacement from its current position with respect to time.

Now, let's switch to money part inside the stock market, where we have a lot of candlesticks, so we need to understand that what value will be the most prominent to take as center, below which we can sell and, above which we can buy a particular stock.

Let's assume I want to buy and sell a stock and need to fix the center with respect to which I can trade, should I take the median, let's say I take the median but frequency of its repetition is too low and it is the median for a particular year, so should I take the one with highest frequency, maybe it lies at the highest point of candlestick or the lowest point, so let's fix it to take median and mode both like we take all the points lying near the center having high frequency, so we mark that area with highest probability distribution because we want to find element from that part only, so center is really important and so is the frequency. Now, is it enough to predict market, no because mean is the one which predicts the actual market as it tells the average price around all points, in other words, we can say that it tells the price intensity of stock.

If someone takes the above factors into consideration, it would be really helpful for one to predict the market. For calculation of such probability distribution, the gaussian expression is being used whose curve depicts the overall frequency at all price points with respect to time/order.

# Weiner Process
Now, in order to optimise the brownian motion for finance particularly, weiner process came into existence where he gave 3 major laws:
- $W_0 = 0$ (The particle starts at the origin).
- Independent Increments: What the market did yesterday has no physical collision-link to what it does today.
- Normal Distribution: The change in position over any time interval follows a Gaussian distribution.
Weiner process is also known as scaling invariance as he predicts that if we go from $B_t$ to $\theta B_t$, time changes from $t$ to $\theta^2 t$.

## Moment of Brownian Motion
Now, moment of brownian motion depicts the shape of probability curve, it tells about the position, volatility and skewness of curves as the moment increases. Now, moment is calculated as per exponential series because the model of scaling that weiner proposed, involved scaling to $\theta^2 t$. Now, we have an arithematic expression for $$E[e^Y] = e^{E[Y] + \frac{1}{2}V[Y]}$$, where we put V[Y]=$e^{\frac{1}{2} \theta^2 t}$. Now, we will find all order derivatives and put $\theta$ as 0, finally, we will get all the moments and what we notice will be that all the odd derivatives will be 0.

Why is all odd derivatives 0 here? 
It is because we need to scale the terms in positive direction which can only be achieved through even order derivatives while odd order derivatives might lead to negative direction which can't be possible. While calculation, we notice that every value cuts every other value to nullify its effect which gives us an insight about the behaviour of odd terms and how they are contributing in price fluctuations by moving to and fro within the price limit only.

Now, comes the expression for calculation of moment of brownian motion:
- E[$B_t^{2k+1}$] = 0, for n=1,3,5,...
- E[$B_t^{2k}$] = (2k-1)!! $t^k$, for n=2,4,6,...

Let's say we need to calculate the next moment and prev moment is given to us, we follow the following expression:
E[$B_t^{2k+1}$] = 2t(k+$\frac{1}{2}$) E[$B_t^{2k}$]

## Stochastic Calculus
Now, after this, a very interesting concept come which can awaken different dimensions of our mind that it is not necessary whether we are given states, functions, constraints, etc. still, we can't solve the equation because now it doesn't depend only on constraints now but depends upon the event which has occurred at that particular time. 

For eg, a new day comes and I am having my work as a function of time but there are variety of work I can do, let's say I have a work to practice DSA, system design, build project or learn something new, now any of the event occurs, my work with a function of time is different for all events/work, now, for a whole day, n number of events can occur. 

Let's say world is moving as per the instructions given to it but there is some glitch and mistakes in the events to occur, we have an event which has occured entirely different from what could happen on this earth, now it is not one plot but number of plots where due to certain glitch, different event has occured, we might plot it as a different axis and when analyse and tend it to move towards each other, we definitely would find a plane where every event occur but we can't deny the fact that planar zigzag might be possible disrupting such assumption.

This is termed as stochastic calculus.