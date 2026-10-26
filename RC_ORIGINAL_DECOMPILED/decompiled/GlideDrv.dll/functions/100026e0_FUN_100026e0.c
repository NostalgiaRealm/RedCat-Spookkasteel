/*
 * FUN_100026e0 at 100026e0
 * char * __cdecl FUN_100026e0(int param_1, int param_2, char param_3, undefined4 * param_4)
 * Address ranges: 100026e0-1000273a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

char * __cdecl FUN_100026e0(int param_1,int param_2,char param_3,undefined4 *param_4)

{
  char *pcVar1;
  void *pvVar2;
  
  pcVar1 = FUN_10002270();
  if (pcVar1 == (char *)0x0) {
    FUN_10001920(7,s_GLIDE_CreateTexture__No_more_han_1000e6e0);
    return (char *)0x0;
  }
  *(int *)(pcVar1 + 8) = param_1;
  *(int *)(pcVar1 + 0x10) = param_1;
  *(int *)(pcVar1 + 0xc) = param_2;
  pcVar1[0x14] = param_3;
  pvVar2 = _malloc(param_1 * param_2 * 2);
  *(void **)(pcVar1 + 0x28) = pvVar2;
  *(undefined4 *)(pcVar1 + 0x20) = *param_4;
  *(undefined4 *)(pcVar1 + 0x24) = param_4[1];
  return pcVar1;
}

