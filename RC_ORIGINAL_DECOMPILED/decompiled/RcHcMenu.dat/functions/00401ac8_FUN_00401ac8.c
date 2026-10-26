/*
 * FUN_00401ac8 at 00401ac8
 * undefined __register FUN_00401ac8(int param_1, int param_2, int * param_3)
 * Address ranges: 00401ac8-00401b53
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00401ac8(int param_1,int param_2,int *param_3)

{
  uint uVar1;
  uint uVar2;
  LPVOID local_1c;
  int local_18;
  LPVOID local_14;
  int local_10;
  
  uVar1 = param_1 + 0x3fffU & 0xffffc000;
  uVar2 = param_2 + param_1 & 0xffffc000;
  if (uVar1 < uVar2) {
    FUN_00401894(uVar1,uVar2 - uVar1,param_3);
    FUN_00401568(&DAT_00573468,param_3,(int *)&local_1c);
    if (local_1c != (LPVOID)0x0) {
      FUN_00401748(local_1c,local_18,&local_14);
      local_1c = local_14;
      local_18 = local_10;
    }
    if (local_1c != (LPVOID)0x0) {
      FUN_004015dc(&DAT_00573468,(uint *)&local_1c);
    }
  }
  else {
    *param_3 = 0;
  }
  return;
}

