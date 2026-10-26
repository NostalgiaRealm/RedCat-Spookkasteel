/*
 * FUN_004ab5ec at 004ab5ec
 * undefined __register FUN_004ab5ec(int * param_1, int * param_2, int param_3, byte param_4)
 * Address ranges: 004ab5ec-004ab7ed
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_004ab5ec(int *param_1,int *param_2,int param_3,byte param_4)

{
  uint uVar1;
  int iVar2;
  int extraout_ECX;
  int extraout_ECX_00;
  int extraout_ECX_01;
  int extraout_ECX_02;
  int extraout_ECX_03;
  int extraout_ECX_04;
  int extraout_ECX_05;
  int extraout_ECX_06;
  int extraout_ECX_07;
  int extraout_ECX_08;
  int iVar3;
  int extraout_EDX;
  int extraout_EDX_00;
  int extraout_EDX_01;
  int extraout_EDX_02;
  int extraout_EDX_03;
  int extraout_EDX_04;
  int *piVar4;
  bool bVar5;
  int local_20 [4];
  int local_10;
  int *local_c;
  int *local_8;
  
  piVar4 = local_20;
  local_10 = param_3;
  local_c = param_2;
  local_8 = param_1;
  for (iVar2 = 4; iVar2 != 0; iVar2 = iVar2 + -1) {
    *piVar4 = *param_2;
    param_2 = param_2 + 1;
    piVar4 = piVar4 + 1;
  }
  uVar1 = FUN_0041c034((int *)local_8[4],
                       *(undefined4 *)
                        (local_10 + (uint)(byte)(&DAT_005719b8)[(uint)param_4 * 4] * 4));
  iVar2 = local_20[3] + -1;
  if (SBORROW4(local_20[3],1)) {
    thunk_FUN_00402874(uVar1);
    iVar2 = extraout_ECX;
  }
  uVar1 = FUN_0041cad0(local_8,local_20[0],iVar2);
  iVar2 = local_20[3] + -1;
  if (SBORROW4(local_20[3],1)) {
    uVar1 = thunk_FUN_00402874(uVar1);
    iVar2 = extraout_ECX_00;
  }
  iVar3 = local_20[2] + -1;
  if (SBORROW4(local_20[2],1)) {
    thunk_FUN_00402874(uVar1);
    iVar2 = extraout_ECX_01;
    iVar3 = extraout_EDX;
  }
  uVar1 = FUN_0041ca70(local_8,iVar3,iVar2);
  iVar2 = local_20[1] + -1;
  if (SBORROW4(local_20[1],1)) {
    uVar1 = thunk_FUN_00402874(uVar1);
    iVar2 = extraout_ECX_02;
  }
  iVar3 = local_20[2] + -1;
  if (SBORROW4(local_20[2],1)) {
    thunk_FUN_00402874(uVar1);
    iVar2 = extraout_ECX_03;
    iVar3 = extraout_EDX_00;
  }
  uVar1 = FUN_0041ca70(local_8,iVar3,iVar2);
  bVar5 = SBORROW4(local_20[2],1);
  local_20[2] = local_20[2] + -1;
  if (bVar5) {
    uVar1 = thunk_FUN_00402874(uVar1);
  }
  bVar5 = SBORROW4(local_20[3],1);
  local_20[3] = local_20[3] + -1;
  if (bVar5) {
    thunk_FUN_00402874(uVar1);
  }
  FUN_0041c034((int *)local_8[4],
               *(undefined4 *)(local_10 + (uint)(byte)(&DAT_005719b9)[(uint)param_4 * 4] * 4));
  FUN_0041cad0(local_8,local_20[0],local_20[3]);
  uVar1 = FUN_0041ca70(local_8,local_20[0],local_20[1]);
  iVar2 = local_20[2] + 1;
  if (SCARRY4(local_20[2],1)) {
    thunk_FUN_00402874(uVar1);
    iVar2 = extraout_EDX_01;
  }
  uVar1 = FUN_0041ca70(local_8,iVar2,local_20[1]);
  bVar5 = SCARRY4(local_20[0],1);
  local_20[0] = local_20[0] + 1;
  if (bVar5) {
    uVar1 = thunk_FUN_00402874(uVar1);
  }
  bVar5 = SCARRY4(local_20[1],1);
  local_20[1] = local_20[1] + 1;
  if (bVar5) {
    thunk_FUN_00402874(uVar1);
  }
  uVar1 = FUN_0041c034((int *)local_8[4],
                       *(undefined4 *)
                        (local_10 + (uint)(byte)(&DAT_005719ba)[(uint)param_4 * 4] * 4));
  iVar2 = local_20[3] + -1;
  if (SBORROW4(local_20[3],1)) {
    thunk_FUN_00402874(uVar1);
    iVar2 = extraout_ECX_04;
  }
  uVar1 = FUN_0041cad0(local_8,local_20[0],iVar2);
  iVar2 = local_20[3] + -1;
  if (SBORROW4(local_20[3],1)) {
    uVar1 = thunk_FUN_00402874(uVar1);
    iVar2 = extraout_ECX_05;
  }
  iVar3 = local_20[2] + -1;
  if (SBORROW4(local_20[2],1)) {
    thunk_FUN_00402874(uVar1);
    iVar2 = extraout_ECX_06;
    iVar3 = extraout_EDX_02;
  }
  uVar1 = FUN_0041ca70(local_8,iVar3,iVar2);
  iVar2 = local_20[1] + -1;
  if (SBORROW4(local_20[1],1)) {
    uVar1 = thunk_FUN_00402874(uVar1);
    iVar2 = extraout_ECX_07;
  }
  iVar3 = local_20[2] + -1;
  if (SBORROW4(local_20[2],1)) {
    thunk_FUN_00402874(uVar1);
    iVar2 = extraout_ECX_08;
    iVar3 = extraout_EDX_03;
  }
  uVar1 = FUN_0041ca70(local_8,iVar3,iVar2);
  bVar5 = SBORROW4(local_20[2],1);
  local_20[2] = local_20[2] + -1;
  if (bVar5) {
    uVar1 = thunk_FUN_00402874(uVar1);
  }
  bVar5 = SBORROW4(local_20[3],1);
  local_20[3] = local_20[3] + -1;
  if (bVar5) {
    thunk_FUN_00402874(uVar1);
  }
  FUN_0041c034((int *)local_8[4],
               *(undefined4 *)(local_10 + (uint)(byte)(&DAT_005719bb)[(uint)param_4 * 4] * 4));
  FUN_0041cad0(local_8,local_20[0],local_20[3]);
  uVar1 = FUN_0041ca70(local_8,local_20[0],local_20[1]);
  iVar2 = local_20[2] + 1;
  if (SCARRY4(local_20[2],1)) {
    thunk_FUN_00402874(uVar1);
    iVar2 = extraout_EDX_04;
  }
  FUN_0041ca70(local_8,iVar2,local_20[1]);
  return;
}

