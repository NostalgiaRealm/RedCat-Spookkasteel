/*
 * FUN_004e1ee0 at 004e1ee0
 * undefined FUN_004e1ee0(void)
 * Address ranges: 004e1ee0-004e1f4b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

char __fastcall FUN_004e1ee0(int *param_1)

{
  char cVar1;
  
  if (((param_1[0xa8] == 1) || (param_1[0xa8] == 3)) &&
     (cVar1 = (**(code **)(*param_1 + 0x88))(), cVar1 != '\0')) {
    cVar1 = FUN_00502480();
    cVar1 = (**(code **)(*param_1 + 0x7c))(cVar1 != '\0');
    if (cVar1 != '\0') {
      FUN_00505400(&DAT_006b9650);
      param_1[0xa8] = 0;
    }
    return cVar1;
  }
  return '\0';
}

