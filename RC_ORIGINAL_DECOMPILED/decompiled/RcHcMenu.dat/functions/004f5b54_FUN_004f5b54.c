/*
 * FUN_004f5b54 at 004f5b54
 * undefined __register FUN_004f5b54(int param_1, int param_2)
 * Address ranges: 004f5b54-004f5be6
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_004f5b54(int param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int local_1c;
  undefined1 local_18;
  int local_14;
  undefined1 local_10;
  
  if (*(int *)(param_1 + 500) != 0) {
    iVar3 = *(int *)(*(int *)(*(int *)(param_1 + 500) + 0x240) + 8) + -1;
    if (iVar3 < param_2) {
      local_18 = 0;
      local_10 = 0;
      local_1c = param_2;
      local_14 = iVar3;
      uVar1 = FUN_0040cfe4((int)&DAT_00410554,'\x01',(undefined4 *)PTR_LAB_00572104,1,&local_1c);
      FUN_0040382c(uVar1);
    }
    iVar3 = FUN_004f5a64(param_1);
    iVar2 = FUN_004f5a48(param_1);
    FUN_00412478(*(int **)(*(int *)(param_1 + 500) + 0x240),iVar2,param_2);
    if (-1 < iVar3) {
      FUN_004f5a64(param_1);
      FUN_004f6348(*(int *)(param_1 + 500),iVar3);
    }
  }
  return;
}

