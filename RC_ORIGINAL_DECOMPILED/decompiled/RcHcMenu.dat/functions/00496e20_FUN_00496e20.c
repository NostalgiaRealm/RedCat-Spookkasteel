/*
 * FUN_00496e20 at 00496e20
 * undefined __register FUN_00496e20(int * param_1, undefined4 * param_2)
 * Address ranges: 00496e20-00496e7f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00496e20(int *param_1,undefined4 *param_2)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  int extraout_EDX;
  int extraout_EDX_00;
  byte bVar4;
  
  bVar4 = 0;
  iVar3 = param_1[1] + 1;
  if (SCARRY4(param_1[1],1)) {
    thunk_FUN_00402874((uint)param_1);
    iVar3 = extraout_EDX;
  }
  FUN_0045d910((uint)param_1,iVar3);
  piVar1 = param_1 + 1;
  iVar3 = *piVar1;
  *piVar1 = *piVar1 + 1;
  if (SCARRY4(iVar3,1)) {
    thunk_FUN_00402874((uint)param_1);
  }
  iVar3 = param_1[1] + -1;
  if (SBORROW4(param_1[1],1)) {
    thunk_FUN_00402874((uint)param_1);
    iVar3 = extraout_EDX_00;
  }
  puVar2 = (undefined4 *)FUN_00496dfc(param_1,iVar3);
  for (iVar3 = 0x12; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar2 = *param_2;
    param_2 = param_2 + (uint)bVar4 * -2 + 1;
    puVar2 = puVar2 + (uint)bVar4 * -2 + 1;
  }
  return;
}

