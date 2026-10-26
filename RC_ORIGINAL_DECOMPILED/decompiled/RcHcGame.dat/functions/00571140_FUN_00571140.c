/*
 * FUN_00571140 at 00571140
 * undefined FUN_00571140(void)
 * Address ranges: 00571140-00571281
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_00571140(int param_1,char param_2,char param_3)

{
  undefined4 uVar1;
  int iVar2;
  
  if (*(char *)(param_1 + 0x2e6) == '\0') {
    *(undefined1 *)(param_1 + 0x2e6) = 1;
    *(undefined4 *)(param_1 + 0x2e0) = 0;
    if (param_2 != '\0') {
      FUN_0056fe00();
      FUN_0056fe00();
      FUN_0060a4a0();
      uVar1 = __ftol();
      FUN_004041b0(uVar1);
    }
    if (param_3 != '\0') {
      iVar2 = FUN_0056fe00();
      if (*(char *)(iVar2 + 0x86) != '\0') {
        FUN_00570fd0();
        iVar2 = FUN_0060a4a0();
        FUN_0049ccf0((float)(iVar2 % 10000) * 0.0006283185 - 3.1415927);
        iVar2 = FUN_0060a4a0();
        FUN_0049cd90((float)(iVar2 % 10000) * 0.0006283185 - 3.1415927);
        iVar2 = FUN_0060a4a0();
        FUN_0049ce30((float)(iVar2 % 10000) * 0.0006283185 - 3.1415927);
      }
    }
  }
  return;
}

