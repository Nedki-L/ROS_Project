/* generated vector source file - do not edit */
        #include "bsp_api.h"
        /* Do not build these data structures if no interrupts are currently allocated because IAR will have build errors. */
        #if VECTOR_DATA_IRQ_COUNT > 0
        BSP_DONT_REMOVE const fsp_vector_t g_vector_table[BSP_ICU_VECTOR_MAX_ENTRIES] BSP_PLACE_IN_SECTION(BSP_SECTION_APPLICATION_VECTORS) =
        {
                        [0] = sci_uart_rxi_isr, /* SCI7 RXI (Received data full) */
            [1] = sci_uart_txi_isr, /* SCI7 TXI (Transmit data empty) */
            [2] = sci_uart_tei_isr, /* SCI7 TEI (Transmit end) */
            [3] = sci_uart_eri_isr, /* SCI7 ERI (Receive error) */
            [4] = r_icu_isr, /* ICU IRQ0 (External pin interrupt 0) */
            [5] = sci_uart_rxi_isr, /* SCI3 RXI (Received data full) */
            [6] = sci_uart_txi_isr, /* SCI3 TXI (Transmit data empty) */
            [7] = sci_uart_tei_isr, /* SCI3 TEI (Transmit end) */
            [8] = sci_uart_eri_isr, /* SCI3 ERI (Receive error) */
            [9] = iic_master_rxi_isr, /* IIC0 RXI (Receive data full) */
            [10] = iic_master_txi_isr, /* IIC0 TXI (Transmit data empty) */
            [11] = iic_master_tei_isr, /* IIC0 TEI (Transmit end) */
            [12] = iic_master_eri_isr, /* IIC0 ERI (Transfer error) */
            [13] = r_icu_isr, /* ICU IRQ1 (External pin interrupt 1) */
            [14] = r_icu_isr, /* ICU IRQ4 (External pin interrupt 4) */
        };
        const bsp_interrupt_event_t g_interrupt_event_link_select[BSP_ICU_VECTOR_MAX_ENTRIES] =
        {
            [0] = BSP_PRV_IELS_ENUM(EVENT_SCI7_RXI), /* SCI7 RXI (Received data full) */
            [1] = BSP_PRV_IELS_ENUM(EVENT_SCI7_TXI), /* SCI7 TXI (Transmit data empty) */
            [2] = BSP_PRV_IELS_ENUM(EVENT_SCI7_TEI), /* SCI7 TEI (Transmit end) */
            [3] = BSP_PRV_IELS_ENUM(EVENT_SCI7_ERI), /* SCI7 ERI (Receive error) */
            [4] = BSP_PRV_IELS_ENUM(EVENT_ICU_IRQ0), /* ICU IRQ0 (External pin interrupt 0) */
            [5] = BSP_PRV_IELS_ENUM(EVENT_SCI3_RXI), /* SCI3 RXI (Received data full) */
            [6] = BSP_PRV_IELS_ENUM(EVENT_SCI3_TXI), /* SCI3 TXI (Transmit data empty) */
            [7] = BSP_PRV_IELS_ENUM(EVENT_SCI3_TEI), /* SCI3 TEI (Transmit end) */
            [8] = BSP_PRV_IELS_ENUM(EVENT_SCI3_ERI), /* SCI3 ERI (Receive error) */
            [9] = BSP_PRV_IELS_ENUM(EVENT_IIC0_RXI), /* IIC0 RXI (Receive data full) */
            [10] = BSP_PRV_IELS_ENUM(EVENT_IIC0_TXI), /* IIC0 TXI (Transmit data empty) */
            [11] = BSP_PRV_IELS_ENUM(EVENT_IIC0_TEI), /* IIC0 TEI (Transmit end) */
            [12] = BSP_PRV_IELS_ENUM(EVENT_IIC0_ERI), /* IIC0 ERI (Transfer error) */
            [13] = BSP_PRV_IELS_ENUM(EVENT_ICU_IRQ1), /* ICU IRQ1 (External pin interrupt 1) */
            [14] = BSP_PRV_IELS_ENUM(EVENT_ICU_IRQ4), /* ICU IRQ4 (External pin interrupt 4) */
        };
        #endif