/*
 * FUN_00454c38 at 00454c38
 * undefined __register FUN_00454c38(int * param_1, int * param_2)
 * Address ranges: 00454c38-00454cd4
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00454c38(int *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  
  if ((char)param_1[0x4e] != '\0') {
    (**(code **)(*param_1 + 0x40))(param_1,param_2);
    return;
  }
  if (*(char *)((int)param_1 + 0x139) == '\0') {
    uVar3 = FUN_0041f440(param_1[0x4a]);
    uVar4 = FUN_0041f428(param_1[0x4a]);
    FUN_00411624(0,0,uVar4,param_2,uVar3);
  }
  else {
    iVar1 = FUN_0041f440(param_1[0x4a]);
    iVar2 = FUN_0041f440(param_1[0x4a]);
    iVar5 = param_1[0xf] - iVar2 >> 1;
    if (iVar5 < 0) {
      iVar5 = iVar5 + (uint)((param_1[0xf] - iVar2 & 1U) != 0);
    }
    iVar2 = FUN_0041f428(param_1[0x4a]);
    iVar6 = param_1[0xe] - iVar2 >> 1;
    if (iVar6 < 0) {
      iVar6 = iVar6 + (uint)((param_1[0xe] - iVar2 & 1U) != 0);
    }
    iVar2 = FUN_0041f428(param_1[0x4a]);
    FUN_00411640(iVar6,iVar5,iVar2,param_2,iVar1);
  }
  return;
}

