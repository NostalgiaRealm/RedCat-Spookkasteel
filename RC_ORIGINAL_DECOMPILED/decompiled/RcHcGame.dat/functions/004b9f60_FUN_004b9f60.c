/*
 * FUN_004b9f60 at 004b9f60
 * undefined FUN_004b9f60(void)
 * Address ranges: 004b9f60-004ba046
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_004b9f60(int param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 local_24;
  undefined4 local_20;
  
  *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(param_2 + 0x14);
  *(undefined4 *)(param_1 + 0x2c) = *(undefined4 *)(param_2 + 0x18);
  *(undefined4 *)(param_1 + 0x20) = 1;
  *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_2 + 0x1c);
  *(undefined4 *)(param_1 + 0x1c) = *(undefined4 *)(param_2 + 0x20);
  iVar1 = FUN_005ba610(param_3,*(undefined4 *)(param_2 + 0x24));
  *(int *)(param_1 + 4) = iVar1;
  if (iVar1 != 0) {
    iVar1 = FUN_005c3790();
    if (iVar1 == 1) {
      FUN_005c3100();
      iVar1 = FUN_005c3350(0);
      if (((iVar1 != 0) &&
          (*(int *)(param_1 + 0x24) = local_24 / *(int *)(param_1 + 0x20),
          *(int *)(param_1 + 0x28) < local_24)) && (*(int *)(param_1 + 0x2c) < local_20)) {
        iVar1 = FUN_005c01d0(1,9);
        *(int *)(param_1 + 8) = iVar1;
        if (iVar1 != 0) {
          FUN_005c3100();
          FUN_005c34b0();
          iVar1 = FUN_005c01d0(1,9);
          *(int *)(param_1 + 0xc) = iVar1;
          if (iVar1 != 0) {
            FUN_005c3100();
            return 1;
          }
        }
      }
    }
  }
  return 0;
}

