/*
 * flsall at 0060e666
 * undefined __cdecl flsall(void)
 * Address ranges: 0060e666-0060e6d2
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Library Function - Single Match  _flsall  Library: Visual Studio 2003 Release
 */

/* Library Function - Single Match
    _flsall
   
   Library: Visual Studio 2003 Release */

int __cdecl flsall(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = 0;
  iVar2 = 0;
  iVar4 = 0;
  if (0 < DAT_00748ec0) {
    do {
      iVar1 = *(int *)(DAT_00747eb8 + iVar3 * 4);
      if ((iVar1 != 0) && ((*(uint *)(iVar1 + 0xc) & 0x83) != 0)) {
        if (param_1 == 1) {
          iVar1 = FUN_0060e5c6(iVar1);
          if (iVar1 != -1) {
            iVar2 = iVar2 + 1;
          }
        }
        else if ((param_1 == 0) && ((*(uint *)(iVar1 + 0xc) & 2) != 0)) {
          iVar1 = FUN_0060e5c6(iVar1);
          if (iVar1 == -1) {
            iVar4 = -1;
          }
        }
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < DAT_00748ec0);
  }
  if (param_1 != 1) {
    iVar2 = iVar4;
  }
  return iVar2;
}

