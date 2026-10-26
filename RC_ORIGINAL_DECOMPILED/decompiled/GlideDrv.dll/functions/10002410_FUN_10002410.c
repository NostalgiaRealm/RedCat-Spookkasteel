/*
 * FUN_10002410 at 10002410
 * char * __cdecl FUN_10002410(int param_1, undefined4 * param_2, undefined4 param_3, undefined4 * param_4)
 * Address ranges: 10002410-100025e5
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

char * __cdecl FUN_10002410(int param_1,undefined4 *param_2,undefined4 param_3,undefined4 *param_4)

{
  int *piVar1;
  char *pcVar2;
  int iVar3;
  undefined4 *puVar4;
  size_t _Size;
  undefined4 uVar5;
  int local_18;
  int local_14 [2];
  void *pvStack_c;
  int iStack_4;
  
  pcVar2 = FUN_10002270();
  if (pcVar2 == (char *)0x0) {
    FUN_10001920(7,s_GLIDE_Create3DTexture__No_more_h_1000e5fc);
    return (char *)0x0;
  }
  if (0x100 < param_1) {
    FUN_10001920(7,s_GLIDE_Create3DTexture__Width_>_2_1000e5d8);
    return (char *)0x0;
  }
  if (0x100 < (int)param_2) {
    FUN_10001920(7,s_GLIDE_Create3DTexture__Height_>_2_1000e5b0);
    return (char *)0x0;
  }
  iVar3 = FUN_10002b00(param_1);
  puVar4 = (undefined4 *)FUN_10002b00((int)param_2);
  if (param_1 != iVar3) {
    FUN_10001920(7,s_GLIDE_Create3DTexture__Not_a_pow_1000e584);
    return (char *)0x0;
  }
  if (param_2 != puVar4) {
    FUN_10001920(7,s_GLIDE_Create3DTexture__Not_a_pow_1000e584);
    return (char *)0x0;
  }
  iVar3 = FUN_10002390(*param_4,&local_18);
  if (iVar3 == 0) {
    FUN_10001920(7,s_GLIDE_RegisterMiscTexture__Glide_1000e540);
    return (char *)0x0;
  }
  piVar1 = (int *)(pcVar2 + 0x10);
  iVar3 = FUN_10002310(local_14,param_1,(int)param_2,param_3,local_18,piVar1);
  if (iVar3 == 0) {
    FUN_10001920(7,s_GLIDE_RegisterMiscTexture__Setup_1000e510);
    return (char *)0x0;
  }
  iVar3 = FUN_10002ae0(*piVar1);
  pcVar2[0x1c] = (char)iVar3;
  _Size = grTexTextureMemRequired(3,local_14);
  pvStack_c = _malloc(_Size);
  if (pvStack_c == (void *)0x0) {
    FUN_10001920(7,s_GLIDE_RegisterMiscTexture__out_o_1000e4dc);
    return (char *)0x0;
  }
  *(void **)(pcVar2 + 0x28) = pvStack_c;
  iVar3 = *piVar1;
  *pcVar2 = '\x01';
  pcVar2[0x14] = (char)param_3;
  *(int *)(pcVar2 + 8) = iStack_4;
  *(undefined4 **)(pcVar2 + 0xc) = param_2;
  *(float *)(pcVar2 + 0x18) = 255.0 / (float)iVar3;
  iStack_4 = iVar3;
  uVar5 = FUN_100012b0(DAT_101f5524,iVar3,iVar3,(char)param_3,(int *)&stack0xffffffe4);
  *(undefined4 *)(pcVar2 + 0x2c) = uVar5;
  *(undefined4 *)(pcVar2 + 0x20) = *param_2;
  *(undefined4 *)(pcVar2 + 0x24) = param_2[1];
  DAT_101f5520 = 1;
  return pcVar2;
}

