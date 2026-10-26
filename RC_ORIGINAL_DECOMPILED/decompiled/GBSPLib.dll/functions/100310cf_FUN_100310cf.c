/*
 * FUN_100310cf at 100310cf
 * undefined FUN_100310cf(void)
 * Address ranges: 100310cf-100311f1
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_100310cf(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int *piVar3;
  int iVar4;
  int local_8;
  int local_4;
  
  iVar4 = -1;
  FUN_1002e819(0x12);
  local_8 = 0;
  local_4 = 0;
  piVar3 = &DAT_1052a9c0;
  while (puVar2 = (undefined4 *)*piVar3, puVar1 = puVar2, puVar2 != (undefined4 *)0x0) {
    for (; puVar2 < puVar1 + 0x120; puVar2 = puVar2 + 9) {
      if ((*(byte *)(puVar2 + 1) & 1) == 0) {
        if (puVar2[2] == 0) {
          FUN_1002e819(0x11);
          if (puVar2[2] == 0) {
            InitializeCriticalSection((LPCRITICAL_SECTION)(puVar2 + 3));
            puVar2[2] = puVar2[2] + 1;
          }
          FUN_1002e87a(0x11);
        }
        EnterCriticalSection((LPCRITICAL_SECTION)(puVar2 + 3));
        if ((*(byte *)(puVar2 + 1) & 1) == 0) {
          *puVar2 = 0xffffffff;
          iVar4 = ((int)puVar2 - *piVar3) / 0x24 + local_4;
          if (iVar4 != -1) goto LAB_100311e1;
          break;
        }
        LeaveCriticalSection((LPCRITICAL_SECTION)(puVar2 + 3));
      }
      puVar1 = (undefined4 *)*piVar3;
    }
    local_4 = local_4 + 0x20;
    piVar3 = piVar3 + 1;
    local_8 = local_8 + 1;
    if (0x1052aabf < (int)piVar3) goto LAB_100311e1;
  }
  puVar2 = _malloc(0x480);
  if (puVar2 != (undefined4 *)0x0) {
    DAT_1052aac0 = DAT_1052aac0 + 0x20;
    (&DAT_1052a9c0)[local_8] = puVar2;
    puVar1 = puVar2;
    for (; puVar2 < puVar1 + 0x120; puVar2 = puVar2 + 9) {
      *(undefined1 *)(puVar2 + 1) = 0;
      *puVar2 = 0xffffffff;
      puVar2[2] = 0;
      *(undefined1 *)((int)puVar2 + 5) = 10;
      puVar1 = (undefined4 *)(&DAT_1052a9c0)[local_8];
    }
    iVar4 = local_8 << 5;
    FUN_1003132f(iVar4);
  }
LAB_100311e1:
  FUN_1002e87a(0x12);
  return iVar4;
}

