t0 = 0;
tf = 5;
h = 0.05;
t = t0:h:tf;

alpha_values = [-0.8, -0.1, 0.1, 0.3];

y = zeros(length(alpha_values), length(t));

for i = 1:length(alpha_values)
    alpha = alpha_values(i);
    y(i, 1) = 1;
    for j = 1:length(t)-1
        y(i, j+1) = y(i, j) + h * alpha * y(i, j);
    end
end

figure;
hold on;
colors = lines(length(alpha_values));

for i = 1:length(alpha_values)
    plot(t, y(i, :), 'o-', 'Color', colors(i, :), 'DisplayName', sprintf('alpha = %g', alpha_values(i)));
end

legend('show');
xlabel('t');
ylabel('y');
title('Euler Forward solution y vs. time for different alphas');

hold off;