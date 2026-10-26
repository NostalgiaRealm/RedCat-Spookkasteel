/*
 * FUN_00477cd0 at 00477cd0
 * undefined FUN_00477cd0(void)
 * Address ranges: 00477cd0-00477d4b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __thiscall FUN_00477cd0(int param_1,int *param_2,char param_3)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined1 local_c [12];
  
  if (param_2 != (int *)0x0) {
    if ((*(char *)(param_1 + 0x7c) == '\0') || (param_3 != *(char *)(param_1 + 0x14bc))) {
      *(int **)(param_1 + 0x14ac) = param_2;
      puVar2 = (undefined4 *)(**(code **)(*param_2 + 0x48))(local_c);
      *(undefined4 *)(param_1 + 0x14b0) = *puVar2;
      *(undefined4 *)(param_1 + 0x14b4) = puVar2[1];
      uVar1 = puVar2[2];
      *(char *)(param_1 + 0x14bc) = param_3;
      *(undefined4 *)(param_1 + 0x14d0) = 0;
      *(undefined4 *)(param_1 + 0x14b8) = uVar1;
      FUN_00502350(1);
      FUN_004777b0();
      return 1;
    }
  }
  return 0;
}

