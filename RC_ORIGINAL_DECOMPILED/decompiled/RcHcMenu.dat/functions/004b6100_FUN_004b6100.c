/*
 * FUN_004b6100 at 004b6100
 * int * __register FUN_004b6100(int * param_1)
 * Address ranges: 004b6100-004b6173
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int * FUN_004b6100(int *param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  char cVar7;
  int local_14;
  int local_10;
  
  cVar7 = '\x01';
  iVar3 = param_1[6];
  iVar1 = FUN_004b17b8((int)param_1);
  piVar2 = FUN_004b5b0c((int *)&DAT_004b28a0,'\x01',iVar1,iVar3,cVar7);
  iVar3 = FUN_004b17b8((int)param_1);
  uVar4 = iVar3 - 1;
  if (SBORROW4(iVar3,1)) {
    uVar4 = thunk_FUN_00402874(uVar4);
  }
  if (-1 < (int)uVar4) {
    local_14 = uVar4 + 1;
    local_10 = 0;
    do {
      puVar5 = (undefined4 *)FUN_004b60b8(param_1,local_10);
      uVar6 = (**(code **)*puVar5)();
      FUN_004b60dc(piVar2,uVar6);
      local_10 = local_10 + 1;
      local_14 = local_14 + -1;
    } while (local_14 != 0);
  }
  return piVar2;
}

