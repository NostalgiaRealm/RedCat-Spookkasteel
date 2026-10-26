/*
 * FUN_004ab470 at 004ab470
 * undefined __register FUN_004ab470(int * param_1, LONG * param_2, int param_3, byte param_4)
 * Address ranges: 004ab470-004ab5e9
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Removing unreachable block (ram,0x004ab572) */
/* WARNING: Removing unreachable block (ram,0x004ab4e2) */
/* WARNING: Removing unreachable block (ram,0x004ab49a) */
/* WARNING: Removing unreachable block (ram,0x004ab52a) */
/* WARNING: Removing unreachable block (ram,0x004ab5ba) */

void FUN_004ab470(int *param_1,LONG *param_2,int param_3,byte param_4)

{
  uint uVar1;
  int iVar2;
  RECT *pRVar3;
  bool bVar4;
  RECT local_20;
  int local_10;
  LONG *local_c;
  int *local_8;
  
  pRVar3 = &local_20;
  local_10 = param_3;
  local_c = param_2;
  local_8 = param_1;
  for (iVar2 = 4; iVar2 != 0; iVar2 = iVar2 + -1) {
    pRVar3->left = *param_2;
    param_2 = param_2 + 1;
    pRVar3 = (RECT *)&pRVar3->top;
  }
  FUN_0041c318((int *)local_8[5],
               *(undefined4 *)(local_10 + (uint)(byte)(&DAT_00571994)[(uint)param_4 * 5] * 4));
  uVar1 = FUN_0041ca34(local_8,&local_20);
  bVar4 = SBORROW4(local_20.right,1);
  local_20.right = local_20.right + -1;
  if (bVar4) {
    uVar1 = thunk_FUN_00402874(uVar1);
  }
  bVar4 = SBORROW4(local_20.bottom,1);
  local_20.bottom = local_20.bottom + -1;
  if (bVar4) {
    thunk_FUN_00402874(uVar1);
  }
  FUN_0041c318((int *)local_8[5],
               *(undefined4 *)(local_10 + (uint)(byte)(&DAT_00571995)[(uint)param_4 * 5] * 4));
  uVar1 = FUN_0041ca34(local_8,&local_20);
  bVar4 = SCARRY4(local_20.left,1);
  local_20.left = local_20.left + 1;
  if (bVar4) {
    uVar1 = thunk_FUN_00402874(uVar1);
  }
  bVar4 = SCARRY4(local_20.top,1);
  local_20.top = local_20.top + 1;
  if (bVar4) {
    thunk_FUN_00402874(uVar1);
  }
  FUN_0041c318((int *)local_8[5],
               *(undefined4 *)(local_10 + (uint)(byte)(&DAT_00571996)[(uint)param_4 * 5] * 4));
  uVar1 = FUN_0041ca34(local_8,&local_20);
  bVar4 = SBORROW4(local_20.right,1);
  local_20.right = local_20.right + -1;
  if (bVar4) {
    uVar1 = thunk_FUN_00402874(uVar1);
  }
  bVar4 = SBORROW4(local_20.bottom,1);
  local_20.bottom = local_20.bottom + -1;
  if (bVar4) {
    thunk_FUN_00402874(uVar1);
  }
  FUN_0041c318((int *)local_8[5],
               *(undefined4 *)(local_10 + (uint)(byte)(&DAT_00571997)[(uint)param_4 * 5] * 4));
  uVar1 = FUN_0041ca34(local_8,&local_20);
  bVar4 = SCARRY4(local_20.left,1);
  local_20.left = local_20.left + 1;
  if (bVar4) {
    uVar1 = thunk_FUN_00402874(uVar1);
  }
  bVar4 = SCARRY4(local_20.top,1);
  local_20.top = local_20.top + 1;
  if (bVar4) {
    thunk_FUN_00402874(uVar1);
  }
  FUN_0041c318((int *)local_8[5],
               *(undefined4 *)(local_10 + (uint)(byte)(&DAT_00571998)[(uint)param_4 * 5] * 4));
  FUN_0041c9f8(local_8,&local_20);
  return;
}

