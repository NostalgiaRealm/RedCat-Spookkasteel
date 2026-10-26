/*
 * FUN_10002740 at 10002740
 * char * __cdecl FUN_10002740(undefined4 param_1, undefined4 param_2, char param_3, int * param_4)
 * Address ranges: 10002740-100027d0
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

char * __cdecl FUN_10002740(undefined4 param_1,undefined4 param_2,char param_3,int *param_4)

{
  char *pcVar1;
  void *pvVar2;
  
  pcVar1 = FUN_10002270();
  if (pcVar1 == (char *)0x0) {
    FUN_10001920(7,s_GLIDE_CreatePalTexture__No_more_h_1000e73c);
    return (char *)0x0;
  }
  if (*param_4 != 0xd) {
    FUN_10001920(7,s_GLIDE_CreatePalTexture__Invalid_p_1000e70c);
    return (char *)0x0;
  }
  pvVar2 = _malloc(0x400);
  if (pvVar2 == (void *)0x0) {
    FUN_10001920(7,s_GLIDE_RegisterMiscTexture__out_o_1000e4dc);
    return (char *)0x0;
  }
  *(void **)(pcVar1 + 0x28) = pvVar2;
  *pcVar1 = '\x01';
  pcVar1[0x14] = param_3;
  *(undefined4 *)(pcVar1 + 8) = param_1;
  *(undefined4 *)(pcVar1 + 0xc) = param_2;
  *(undefined4 *)(pcVar1 + 0x10) = param_1;
  *(int *)(pcVar1 + 0x20) = *param_4;
  *(int *)(pcVar1 + 0x24) = param_4[1];
  return pcVar1;
}

