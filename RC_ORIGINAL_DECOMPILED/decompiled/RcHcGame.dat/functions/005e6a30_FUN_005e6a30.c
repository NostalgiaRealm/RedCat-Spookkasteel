/*
 * FUN_005e6a30 at 005e6a30
 * undefined FUN_005e6a30(void)
 * Address ranges: 005e6a30-005e6a9f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_005e6a30(int param_1)

{
  void **ppvVar1;
  int *piVar2;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00646938;
  pvStack_c = ExceptionList;
  piVar2 = *(int **)(param_1 + 4);
  local_4 = 0;
  ExceptionList = &pvStack_c;
  ppvVar1 = &pvStack_c;
  if (piVar2 != *(int **)(param_1 + 8)) {
    do {
      if ((undefined4 *)*piVar2 != (undefined4 *)0x0) {
        (*(code *)**(undefined4 **)*piVar2)(1);
      }
      piVar2 = piVar2 + 1;
      ppvVar1 = ExceptionList;
    } while (piVar2 != *(int **)(param_1 + 8));
  }
  ExceptionList = ppvVar1;
  FUN_005fe5f0(*(undefined4 *)(param_1 + 4));
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  ExceptionList = pvStack_c;
  return;
}

