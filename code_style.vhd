VHDL code style:

-- Naming conventions
-- comb/registered signals with clock domain - _[n]_[<clk_id>]
-- reclocked/delayed/resync'd signals - _[n]_q+[<clk_id>] --> _n_q, _n_qqq, _n_qqclk1
-- active low signals - _n
-- ports - _[n]<direction>[s for comb output signals] --> _ni, _os, _nio, _nos
-- output ports - _no_clk1, _no
-- 3-statable ports (only on top level!) - _[n]to

--*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-
--! @brief      Vario-SHARC I/F
--  Project     Variolink on AccurET
--  File        vario_sharc_if.vhd
--! @author     IKA <ivokassamakov@etel.ch>
--  Company     ETEL S.A.
--! @date
--! Created     2011-05-27
--! Last update 2012-09-28
--  Platform    universal
--  Standard    VHDL'93
--! @file
--------------------------------------------------------------------------------
--! @copyright  (c) 2011 ETEL S.A.
--------------------------------------------------------------------------------
--! @details    Interface between the SHARC DSP and Variolink
--------------------------------------------------------------------------------
--! Dependencies
--------------------------------------------------------------------------------
--! Acronyms
--------------------------------------------------------------------------------
-- Revision history:
--
-- 2016-10-27 CH5983 Cxxxxx: Adapted to latest JH sources (true 32-bit access)
-- 2011-05-27 CH5983 Cxxxxx: Created
--*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-


--*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-
-- LIBRARIES
--*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-

--*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-
-- ENTITY
--*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-

--*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-
-- ARCHITECTURE
--*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-

--*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-
-- CONFIGURATIONS
--*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-

--*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-
-- VERIFICATION
--*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-

--==============================================================================
-- SIGNALS
--==============================================================================

--==============================================================================
-- COMPONENTS
--==============================================================================

--------------------------------------------------------------------------------
-- Variolink-requested HW reset of the AccurET
--------------------------------------------------------------------------------

--
-- Comment level 2
--

-- Comment level 3

entity my is
    generic(
        ACC_TYPE_G : string  := "ABC"; --! bla-bla
        RDWR_G     : integer := 32);   --! bla-bla
    port(
        reset_i : in  std_logic;  --! bla-bla
        clk_o   : out std_logic); --! bla-bla
end entity my;

--! seq/comb process
--! Does this and that.
hello_world : process(rst_i, clk_i) is
    --! bla-bla
    my_proc : procedure(a : integer) : integer is
    begin
    end procedure my_proc;

    variable a_v : integer := '0'; --! bla-bla
begin
    if (rst_i = '1') then
        a_o <= '1';
    elsif rising_edge(clk_i) then
        a_o <= '0';
    end if; -- rising_edge(clk_i)
    
    my : for i_v in 1 to 8 loop
    
        next my_l;
    
    end loop my;
    
end process hello_world;

hello : a_o <= '1' when a_i = '1' else
               '0' when a_i = '1' and b_i = '0' and
                        c_i = '1' else
               null;
               
hello : a_o <= '1' 
               when a_i = '1' else
               '0' 
               when a_i = '1' and b_i = '0' and
                    c_i = '1' else
               null;
               
drive_is_not_vhp : if (DRIVE_G = "VHP") generate
begin
    writes : block is
    begin
    end block writes;
    
end generate drive_is_not_vhp;

