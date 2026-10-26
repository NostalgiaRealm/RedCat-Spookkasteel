/*
 * FUN_100025f0 at 100025f0
 * char * __cdecl FUN_100025f0(int param_1, int param_2, undefined1 param_3, int * param_4)
 * Address ranges: 100025f0-100026d5
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

char * __cdecl FUN_100025f0(int param_1,int param_2,undefined1 param_3,int *param_4)

{
  int *piVar1;
  char *pcVar2;
  int iVar3;
  undefined4 uVar4;
  int local_14 [5];
  
  pcVar2 = FUN_10002270();
  if (pcVar2 == (char *)0x0) {
    FUN_10001920(7,s_GLIDE_CreateLightmapTexture__Max_1000e6ac);
    return (char *)0x0;
  }
  if ((*(byte *)(param_4 + 1) & 4) == 0) {
    FUN_10001920(7,s_GLIDE_CreateLightmapTexture__Inv_1000e678);
    return (char *)0x0;
  }
  if (*param_4 != 5) {
    FUN_10001920(7,s_GLIDE_CreateLightmapTexture__Pix_1000e62c);
    return (char *)0x0;
  }
  piVar1 = (int *)(pcVar2 + 0x10);
  *(int *)(pcVar2 + 8) = param_1;
  *(int *)(pcVar2 + 0xc) = param_2;
  iVar3 = FUN_10002310(local_14,param_1,param_2,1,10,piVar1);
  if (iVar3 == 0) {
    return (char *)0x0;
  }
  iVar3 = FUN_10002ae0(*piVar1);
  pcVar2[0x1c] = (char)iVar3;
  uVar4 = FUN_100012b0(DAT_101f5534,*piVar1,*piVar1,param_3,local_14);
  *(undefined4 *)(pcVar2 + 0x2c) = uVar4;
  *(float *)(pcVar2 + 0x18) = 255.0 / (float)(*piVar1 << 4);
  DAT_101f5520 = 1;
  return pcVar2;
}

