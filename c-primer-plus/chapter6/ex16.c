#include <stdio.h>

int main()
{
    const float inv = 100;
    const float Dap_int = 0.1;
    const float Dei_int = 0.05;
    int i = 1;
    float m_dap, m_dei;

    m_dei = m_dap = inv;
    
    do
    {
        m_dei += Dei_int * m_dei;
        m_dap += inv * Dap_int;
        i++;

        printf("Year %d: Daphne inv value = %.2f$, Deirdre inv value = %.2f$\n", i, m_dap, m_dei);
    }while(m_dei <= m_dap);

    printf("Deirdre's investment uses %d years to exceed the value of Daphne's investment.\n", i);

    return 0;
}