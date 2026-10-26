/*
 * FUN_00502680 at 00502680
 * undefined FUN_00502680(void)
 * Address ranges: 00502680-00502708
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_00502680(int *param_1)

{
  int *piVar1;
  char unaff_retaddr;
  undefined1 local_c [12];
  
  if (*(char *)((int)param_1 + 0xdd) == '\0') {
    piVar1 = (int *)(**(code **)(*param_1 + 0x48))(local_c);
    param_1[0x34] = *piVar1;
    param_1[0x35] = piVar1[1];
    param_1[0x36] = piVar1[2];
    *(char *)(param_1 + 0x37) = (char)param_1[0x1f];
    if (unaff_retaddr != '\0') {
      FUN_00502350(0);
    }
    *(undefined1 *)(param_1 + 0x2a) = 0;
    (**(code **)(*param_1 + 0x4c))(&stack0xffffffe4);
    *(undefined1 *)((int)param_1 + 0xdd) = 1;
  }
  return;
}

