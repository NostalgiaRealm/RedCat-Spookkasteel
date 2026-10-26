/*
 * FUN_004f854c at 004f854c
 * undefined __register FUN_004f854c(int param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4, int * param_5)
 * Address ranges: 004f854c-004f85ef
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_004f854c(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,int *param_5)

{
  uint uVar1;
  int iVar2;
  int extraout_ECX;
  int extraout_ECX_00;
  int extraout_ECX_01;
  int iVar3;
  int extraout_EDX;
  int *piVar4;
  int local_20 [4];
  undefined4 local_10;
  undefined4 local_c;
  int local_8;
  
  piVar4 = local_20;
  for (iVar2 = 4; iVar2 != 0; iVar2 = iVar2 + -1) {
    *piVar4 = *param_5;
    param_5 = param_5 + 1;
    piVar4 = piVar4 + 1;
  }
  if (*(char *)(param_1 + 0x3d4) != '\0') {
    local_10 = param_3;
    local_c = param_2;
    local_8 = param_1;
    FUN_0041c034(*(int **)(*(int *)(param_1 + 0x1f8) + 0x10),0xc0c0c0);
    uVar1 = FUN_0041cad0(*(int **)(local_8 + 0x1f8),local_20[2],local_20[1]);
    iVar2 = local_20[3] + -1;
    if (SBORROW4(local_20[3],1)) {
      thunk_FUN_00402874(uVar1);
      iVar2 = extraout_ECX;
    }
    uVar1 = FUN_0041ca70(*(int **)(local_8 + 0x1f8),local_20[2],iVar2);
    iVar2 = local_20[3] + -1;
    if (SBORROW4(local_20[3],1)) {
      uVar1 = thunk_FUN_00402874(uVar1);
      iVar2 = extraout_ECX_00;
    }
    iVar3 = local_20[0] + -1;
    if (SBORROW4(local_20[0],1)) {
      thunk_FUN_00402874(uVar1);
      iVar2 = extraout_ECX_01;
      iVar3 = extraout_EDX;
    }
    FUN_0041ca70(*(int **)(local_8 + 0x1f8),iVar3,iVar2);
  }
  return;
}

