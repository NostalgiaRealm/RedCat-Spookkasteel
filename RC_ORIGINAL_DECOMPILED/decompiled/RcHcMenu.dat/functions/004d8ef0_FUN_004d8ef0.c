/*
 * FUN_004d8ef0 at 004d8ef0
 * int * __register FUN_004d8ef0(int * param_1, char param_2, undefined4 param_3)
 * Address ranges: 004d8ef0-004d901a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x4d8b80 slot 11 for TfrmBalloon. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x4d8b80 slot 11 for
   TfrmBalloon. Original bytes unchanged; names and types still inferred. */

int * FUN_004d8ef0(int *param_1,char param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 extraout_ECX;
  char extraout_DL;
  char cVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 in_stack_ffffffdc;
  undefined4 in_stack_ffffffe0;
  
  cVar2 = '\0';
  if (param_2 != '\0') {
    param_1 = (int *)FUN_004033d4((int)param_1,param_2,param_3,in_stack_ffffffdc,in_stack_ffffffe0);
    param_3 = extraout_ECX;
    cVar2 = extraout_DL;
  }
  FUN_00449cd0(param_1,'\0',param_3);
  FUN_0041bd70((int *)param_1[0x16],(undefined4 *)"MS Sans Serif");
  FUN_0041bde8((int *)param_1[0x16],10);
  FUN_0044b258((int)param_1,'\0');
  FUN_0044b22c((int)param_1,'\0');
  *(undefined1 *)(param_1 + 0xba) = 1;
  param_1[0xb9] = 0;
  *(undefined1 *)(param_1 + 0xb8) = 1;
  FUN_00431f78(param_1,0x8c);
  FUN_00431f98(param_1,0xe6);
  iVar1 = FUN_00432178(param_1);
  param_1[0xbd] = iVar1;
  iVar1 = FUN_004321bc(param_1);
  param_1[0xbb] = iVar1;
  param_1[0xc4] = 0;
  FUN_004328a0((int)param_1,0xffffff);
  iVar1 = *(int *)(param_1[0xb4] + 300);
  FUN_004c5594(iVar1,0xffffff);
  FUN_004c5528(iVar1,0xffffff);
  FUN_004c554c(iVar1,0xffffff);
  if (cVar2 != '\0') {
    FUN_0040342c(param_1);
    *in_FS_OFFSET = in_stack_ffffffdc;
  }
  return param_1;
}

