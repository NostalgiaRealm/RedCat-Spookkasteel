/*
 * FUN_0051731c at 0051731c
 * undefined __register FUN_0051731c(int param_1, int * param_2, RECT * param_3, char param_4)
 * Address ranges: 0051731c-005174ed
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x516d4c slot 48 for TDaviButton2. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x516d4c slot 48 for
   TDaviButton2. Original bytes unchanged; names and types still inferred. */

void FUN_0051731c(int param_1,int *param_2,RECT *param_3,char param_4)

{
  uint uVar1;
  int extraout_ECX;
  int extraout_ECX_00;
  int iVar2;
  int iVar3;
  int extraout_EDX;
  int extraout_EDX_00;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  byte local_11;
  RECT *local_10;
  int *local_c;
  int local_8;
  
  local_28 = *(undefined4 *)(*(int *)(param_1 + 0x204) + 8);
  local_24 = *(undefined4 *)(*(int *)(param_1 + 0x204) + 0x10);
  local_20 = *(undefined4 *)(*(int *)(param_1 + 0x204) + 0xc);
  local_1c = *(undefined4 *)(*(int *)(param_1 + 0x204) + 0x14);
  local_18 = *(undefined4 *)(*(int *)(param_1 + 0x204) + 0x18);
  local_11 = 4;
  if (param_4 == '\x01') {
    local_11 = 1;
  }
  local_10 = param_3;
  local_c = param_2;
  local_8 = param_1;
  if ((*(char *)(param_1 + 0x208) == '\x01') &&
     ((param_4 == '\x03' || (*(char *)(param_1 + 0x209) != '\0')))) {
    FUN_0041c318((int *)param_2[5],*(undefined4 *)(*(int *)(param_1 + 0x204) + 0x18));
    FUN_0041ca34(local_c,local_10);
    InflateRect(local_10,-1,-1);
  }
  FUN_004ab470(local_c,&local_10->left,(int)&local_28,local_11);
  if (((*(char *)(local_8 + 0x208) == '\x01') && (param_4 != '\x03')) &&
     (*(char *)(local_8 + 0x209) == '\0')) {
    InflateRect(local_10,-1,-1);
  }
  if (*(char *)(local_8 + 0x208) == '\0') {
    InflateRect(local_10,-1,-1);
    if (((param_4 == '\x03') || (*(char *)(local_8 + 0x209) != '\0')) && (param_4 != '\x01')) {
      FUN_0041c034((int *)local_c[4],*(undefined4 *)(*(int *)(local_8 + 0x204) + 0x10));
      FUN_0041cad0(local_c,local_10->left,local_10->top);
      FUN_0041ca70(local_c,local_10->left,local_10->bottom);
      uVar1 = FUN_0041c034((int *)local_c[4],*(undefined4 *)(*(int *)(local_8 + 0x204) + 0xc));
      iVar2 = local_10->top;
      iVar3 = local_10->right + -2;
      if (SBORROW4(local_10->right,2)) {
        thunk_FUN_00402874(uVar1);
        iVar2 = extraout_ECX;
        iVar3 = extraout_EDX;
      }
      uVar1 = FUN_0041cad0(local_c,iVar3,iVar2);
      iVar2 = local_10->bottom;
      iVar3 = local_10->right + -2;
      if (SBORROW4(local_10->right,2)) {
        thunk_FUN_00402874(uVar1);
        iVar2 = extraout_ECX_00;
        iVar3 = extraout_EDX_00;
      }
      FUN_0041ca70(local_c,iVar3,iVar2);
    }
  }
  InflateRect(local_10,-1,-1);
  return;
}

