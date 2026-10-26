/*
 * FUN_005ed250 at 005ed250
 * undefined FUN_005ed250(void)
 * Address ranges: 005ed250-005ed2f4
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Removing unreachable block (ram,0x005ed2aa) */
/* WARNING: Removing unreachable block (ram,0x005ed2ab) */
/* WARNING: Removing unreachable block (ram,0x005ed2b9) */

void __fastcall FUN_005ed250(undefined4 *param_1)

{
  uint uVar1;
  int *piVar2;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_006471c7;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *param_1 = &PTR_FUN_00650af0;
  piVar2 = (int *)param_1[2];
  local_4 = 0;
  if (piVar2 != (int *)param_1[3]) {
    do {
      if ((undefined4 *)*piVar2 != (undefined4 *)0x0) {
        (*(code *)**(undefined4 **)*piVar2)(1);
      }
      piVar2 = piVar2 + 1;
    } while (piVar2 != (int *)param_1[3]);
  }
  param_1[3] = param_1[2];
  uVar1 = -(uint)(param_1 != (undefined4 *)0x0) & (uint)(param_1 + 1);
  FUN_005fe5f0(*(undefined4 *)(uVar1 + 4));
  *(undefined4 *)(uVar1 + 4) = 0;
  *(undefined4 *)(uVar1 + 8) = 0;
  *(undefined4 *)(uVar1 + 0xc) = 0;
  ExceptionList = pvStack_c;
  return;
}

