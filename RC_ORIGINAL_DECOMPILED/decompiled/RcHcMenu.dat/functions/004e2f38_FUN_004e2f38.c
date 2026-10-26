/*
 * FUN_004e2f38 at 004e2f38
 * uint __register FUN_004e2f38(int * param_1, undefined4 * param_2)
 * Address ranges: 004e2f38-004e2fd2
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint FUN_004e2f38(int *param_1,undefined4 *param_2)

{
  int *piVar1;
  undefined1 uVar2;
  int iVar3;
  int *piVar4;
  uint uVar5;
  bool bVar6;
  uint local_14 [2];
  undefined4 *local_c;
  int *local_8;
  
  piVar1 = (int *)*param_2;
  local_c = param_2;
  local_8 = param_1;
  iVar3 = FUN_0045da14((int)param_1);
  if (iVar3 == 0) {
    local_14[0] = 0;
  }
  else {
    FUN_004e2d04(local_8,piVar1,local_14);
    if (local_14[0] == 0x80000000) {
      FUN_00403d94("Assertion failure");
    }
    uVar2 = 8;
    piVar4 = (int *)FUN_004e25c4(local_8,local_14[0]);
    uVar5 = FUN_00494814(piVar4,piVar1,local_8[7],uVar2);
    if ((int)uVar5 < 0) {
      bVar6 = SCARRY4(local_14[0],1);
      local_14[0] = local_14[0] + 1;
      if (bVar6) {
        thunk_FUN_00402874(uVar5);
      }
    }
  }
  FUN_004e27a4(local_8,local_14[0],local_c);
  return local_14[0];
}

