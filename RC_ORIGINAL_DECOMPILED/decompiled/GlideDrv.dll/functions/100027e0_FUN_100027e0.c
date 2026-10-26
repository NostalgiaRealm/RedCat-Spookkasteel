/*
 * FUN_100027e0 at 100027e0
 * char * __fastcall FUN_100027e0(int param_1, undefined4 * param_2, undefined4 param_3, int * param_4)
 * Address ranges: 100027e0-1000285c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

char * __fastcall FUN_100027e0(int param_1,undefined4 *param_2,undefined4 param_3,int *param_4)

{
  uint uVar1;
  char *pcVar2;
  char cVar3;
  
  uVar1 = param_4[1];
  cVar3 = (char)param_3;
  if ((uVar1 & 1) != 0) {
    pcVar2 = FUN_100026e0(param_1,(int)param_2,cVar3,param_4);
    return pcVar2;
  }
  if ((uVar1 & 2) != 0) {
    pcVar2 = FUN_10002410(param_1,param_2,param_3,param_4);
    return pcVar2;
  }
  if ((uVar1 & 4) != 0) {
    pcVar2 = FUN_100025f0(param_1,(int)param_2,cVar3,param_4);
    return pcVar2;
  }
  if ((uVar1 & 8) != 0) {
    pcVar2 = FUN_10002740(param_1,param_2,cVar3,param_4);
    return pcVar2;
  }
  FUN_10001920(7,s_GLIDE_CreateTexture__Invalid_pix_1000e76c);
  return (char *)0x0;
}

