/*
 * FUN_10004210 at 10004210
 * undefined4 __stdcall FUN_10004210(undefined4 * param_1, char * param_2, int param_3, int * param_4)
 * Address ranges: 10004210-100042ac
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_10004210(undefined4 *param_1,char *param_2,int param_3,int *param_4)

{
  undefined4 *puVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  
  if ((param_2 != (char *)0x0) && (param_3 != 0)) {
    uVar4 = 0xffffffff;
    do {
      if (uVar4 == 0) break;
      uVar4 = uVar4 - 1;
      cVar2 = *param_2;
      param_2 = param_2 + 1;
    } while (cVar2 != '\0');
    if (~uVar4 + 4 < 0x400) {
      iVar3 = *param_4;
      if (0x3f < iVar3) {
        return 0;
      }
      *param_4 = iVar3 + 1;
      puVar1 = (undefined4 *)(param_4[1] + iVar3 * 0x414);
      if (param_1 == (undefined4 *)0x0) {
        *puVar1 = 1;
      }
      else {
        *puVar1 = 0;
        puVar1[1] = *param_1;
        puVar1[2] = param_1[1];
        puVar1[3] = param_1[2];
        puVar1[4] = param_1[3];
      }
      FUN_1000816d((undefined1 *)(puVar1 + 5),(byte *)s__D3D__s_10014fcc);
    }
  }
  return 1;
}

