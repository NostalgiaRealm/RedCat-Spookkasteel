/*
 * FUN_10005a80 at 10005a80
 * undefined4 __cdecl FUN_10005a80(int param_1, int param_2, int param_3)
 * Address ranges: 10005a80-10005b39
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __cdecl FUN_10005a80(int param_1,int param_2,int param_3)

{
  undefined4 *puVar1;
  int iVar2;
  int *piVar3;
  
  puVar1 = (undefined4 *)(*(int *)(param_2 + 0x14) + param_3 * 0x14);
  iVar2 = FUN_10005830((int)puVar1);
  if (iVar2 == 0) {
    *(byte *)(puVar1 + 4) = *(byte *)(puVar1 + 4) | 2;
    DAT_10116d94 = DAT_10116d94 + 1;
  }
  if ((*(byte *)(puVar1 + 4) & 2) != 0) {
    piVar3 = (int *)FUN_10005460(puVar1[2]);
    iVar2 = (**(code **)(*piVar3 + 0x1c))(piVar3,0,0,*puVar1,0,0x10);
    if (iVar2 != 0) {
      if (iVar2 != -0x7789fe3e) {
        FUN_10001000(iVar2);
        FUN_100020f0(s_SetupTexture__System_to_Video_ca_100154b4);
        return 0;
      }
      iVar2 = FUN_10001b50();
      if (iVar2 == 0) {
        return 0;
      }
    }
  }
  *(byte *)(puVar1 + 4) = *(byte *)(puVar1 + 4) & 0xfd;
  FUN_10004fd0(puVar1[2],DAT_101271d0);
  iVar2 = FUN_10005030(puVar1[2]);
  FUN_10001870(param_1,iVar2);
  return 1;
}

