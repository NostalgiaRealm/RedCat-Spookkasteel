/*
 * FUN_005b9c40 at 005b9c40
 * undefined FUN_005b9c40(void)
 * Address ranges: 005b9c40-005b9cd6
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_005b9c40(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar2 = *(int *)(param_1 + 0x18);
  iVar3 = *(int *)(iVar2 + 0x11c);
  iVar1 = iVar3 + param_2 * 0x3c;
  iVar4 = *(int *)(iVar1 + 0x2c);
  iVar5 = *(int *)(iVar3 + 0x2c + param_3 * 0x3c);
  if ((iVar4 != -1) && (iVar5 != -1)) {
    iVar4 = *(int *)(*(int *)(iVar2 + 0x120) + iVar4 * 4);
    if (iVar4 == -1) {
      return 1;
    }
    if ((((byte)(1 << ((byte)iVar5 & 7)) & *(byte *)(*(int *)(iVar2 + 0x160) + (iVar5 >> 3) + iVar4)
         ) != 0) &&
       (*(char *)(*(int *)(iVar1 + 0x30) * 0x100 + *(int *)(iVar3 + param_3 * 0x3c + 0x30) + 0xd5dc
                 + iVar2) != '\0')) {
      return 1;
    }
  }
  return 0;
}

