/*
 * FUN_005b6320 at 005b6320
 * undefined FUN_005b6320(void)
 * Address ranges: 005b6320-005b63a2
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_005b6320(undefined4 param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = *(undefined4 *)(DAT_006cb3f0 + 0x33678);
  *(int *)(DAT_006cc3f4 + 0xbe0) = *(int *)(DAT_006cc3f4 + 0xbe0) + 1;
  iVar2 = *(int *)(param_2 + 0xa4);
  if (iVar2 == 0) {
    FUN_005b69e0(uVar1,param_2,&DAT_006cade8,param_1);
    return 1;
  }
  if (iVar2 != 1) {
    if (iVar2 != 2) {
      return 0;
    }
    FUN_005b63b0(uVar1,param_2,&DAT_006cade8,param_1);
    return 1;
  }
  FUN_005b6bb0(uVar1,param_2,&DAT_006cade8,param_1);
  return 1;
}

