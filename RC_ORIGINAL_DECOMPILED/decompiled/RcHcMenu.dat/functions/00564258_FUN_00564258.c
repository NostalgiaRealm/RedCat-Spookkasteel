/*
 * FUN_00564258 at 00564258
 * undefined __register FUN_00564258(int * param_1)
 * Address ranges: 00564258-005642e7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00564258(int *param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int extraout_ECX;
  int extraout_ECX_00;
  int iVar5;
  int extraout_ECX_01;
  int extraout_ECX_02;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  undefined4 uVar6;
  undefined4 extraout_EDX_01;
  undefined4 extraout_EDX_02;
  
  cVar1 = FUN_00563d24(param_1[0xb4]);
  if (cVar1 == '\x02') {
    iVar2 = FUN_00563d68(param_1[0xb4]);
    iVar3 = FUN_00563c94(param_1[0xb4]);
    uVar4 = iVar3 - 1;
    iVar5 = extraout_ECX;
    uVar6 = extraout_EDX;
    if (SBORROW4(iVar3,1)) {
      uVar4 = thunk_FUN_00402874(uVar4);
      iVar5 = extraout_ECX_00;
      uVar6 = extraout_EDX_00;
    }
    if ((int)uVar4 <= iVar2) {
      FUN_00563034((int *)param_1[0xb4],uVar6,iVar5);
      FUN_005637f4(param_1[0xb4]);
      FUN_0044dab0(param_1,extraout_EDX_01,extraout_ECX_01);
    }
  }
  else {
    cVar1 = FUN_00563d24(param_1[0xb4]);
    if (cVar1 == '\x01') {
      FUN_0044dab0(param_1,extraout_EDX_02,extraout_ECX_02);
    }
  }
  return;
}

