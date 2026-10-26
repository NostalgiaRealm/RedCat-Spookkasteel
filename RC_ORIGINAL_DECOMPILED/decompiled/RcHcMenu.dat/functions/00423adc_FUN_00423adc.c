/*
 * FUN_00423adc at 00423adc
 * undefined4 __register FUN_00423adc(void)
 * Address ranges: 00423adc-00423b51
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_00423adc(void)

{
  undefined4 uVar1;
  int iVar2;
  int *in_stack_00000004;
  byte in_stack_00000008;
  
  if (DAT_005736ea == '\0') {
    DAT_005736c8 = (code *)FUN_0042396c(2,DAT_005736c8,"MonitorFromRect");
    uVar1 = (*DAT_005736c8)();
    return uVar1;
  }
  if ((in_stack_00000008 & 3) == 0) {
    if (in_stack_00000004[2] < 1) {
      return 0;
    }
    if (in_stack_00000004[3] < 1) {
      return 0;
    }
    iVar2 = (*DAT_005736c0)();
    if (iVar2 <= *in_stack_00000004) {
      return 0;
    }
    iVar2 = (*DAT_005736c0)();
    if (iVar2 <= in_stack_00000004[1]) {
      return 0;
    }
  }
  return 0x12340042;
}

