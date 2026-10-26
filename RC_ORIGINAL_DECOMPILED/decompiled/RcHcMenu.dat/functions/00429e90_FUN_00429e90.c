/*
 * FUN_00429e90 at 00429e90
 * undefined __register FUN_00429e90(int param_1, WPARAM param_2, undefined4 * param_3)
 * Address ranges: 00429e90-00429f7a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00429e90(int param_1,WPARAM param_2,undefined4 *param_3)

{
  HWND pHVar1;
  WPARAM WVar2;
  LRESULT LVar3;
  undefined *lParam;
  undefined4 *in_FS_OFFSET;
  UINT UVar4;
  WPARAM WVar5;
  LPARAM LVar6;
  undefined4 uStack_24;
  undefined1 *puStack_20;
  undefined1 *puStack_1c;
  undefined *local_c;
  undefined4 *local_8;
  
  puStack_1c = &stack0xfffffffc;
  local_c = (undefined *)0x0;
  puStack_20 = &LAB_00429f7b;
  uStack_24 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_24;
  local_8 = param_3;
  if ((int)param_2 < 0) goto LAB_00429f65;
  LVar6 = 0;
  UVar4 = 0xbb;
  WVar2 = param_2;
  pHVar1 = (HWND)FUN_00438988(*(int **)(param_1 + 0xc));
  WVar2 = SendMessageA(pHVar1,UVar4,WVar2,LVar6);
  if ((int)WVar2 < 0) {
    LVar6 = 0;
    WVar2 = param_2 - 1;
    UVar4 = 0xbb;
    pHVar1 = (HWND)FUN_00438988(*(int **)(param_1 + 0xc));
    WVar2 = SendMessageA(pHVar1,UVar4,WVar2,LVar6);
    if ((int)WVar2 < 0) goto LAB_00429f65;
    LVar6 = 0;
    UVar4 = 0xc1;
    WVar5 = WVar2;
    pHVar1 = (HWND)FUN_00438988(*(int **)(param_1 + 0xc));
    LVar3 = SendMessageA(pHVar1,UVar4,WVar5,LVar6);
    if (LVar3 == 0) goto LAB_00429f65;
    WVar2 = WVar2 + LVar3;
    FUN_0040407c((int *)&local_c,(undefined4 *)&LAB_00429f94,local_8);
  }
  else {
    FUN_0040407c((int *)&local_c,local_8,(undefined4 *)&LAB_00429f94);
  }
  UVar4 = 0xb1;
  WVar5 = WVar2;
  pHVar1 = (HWND)FUN_00438988(*(int **)(param_1 + 0xc));
  SendMessageA(pHVar1,UVar4,WVar2,WVar5);
  lParam = FUN_004041f4(local_c);
  WVar2 = 0;
  UVar4 = 0xc2;
  pHVar1 = (HWND)FUN_00438988(*(int **)(param_1 + 0xc));
  SendMessageA(pHVar1,UVar4,WVar2,(LPARAM)lParam);
LAB_00429f65:
  *in_FS_OFFSET = uStack_24;
  puStack_1c = &LAB_00429f82;
  puStack_20 = (undefined1 *)0x429f7a;
  FUN_00403db0((int *)&local_c);
  return;
}

