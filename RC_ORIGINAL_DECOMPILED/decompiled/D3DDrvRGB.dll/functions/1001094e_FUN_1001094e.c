/*
 * FUN_1001094e at 1001094e
 * undefined4 __cdecl FUN_1001094e(DWORD * param_1)
 * Address ranges: 1001094e-10010acf
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __cdecl FUN_1001094e(DWORD *param_1)

{
  bool bVar1;
  DWORD *pDVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  code *pcVar6;
  undefined4 *puVar7;
  DWORD local_10;
  DWORD local_c;
  
  bVar1 = false;
  if (param_1 == (DWORD *)0x2) {
    puVar7 = &DAT_100ec330;
    pcVar6 = DAT_100ec330;
LAB_100109d4:
    bVar1 = true;
    FUN_1000b2ca(1);
    pDVar2 = param_1;
  }
  else {
    if (((param_1 != (DWORD *)0x4) && (param_1 != (DWORD *)0x8)) && (param_1 != (DWORD *)0xb)) {
      if (param_1 == (DWORD *)0xf) {
        puVar7 = &DAT_100ec33c;
        pcVar6 = DAT_100ec33c;
      }
      else if (param_1 == (DWORD *)0x15) {
        puVar7 = &DAT_100ec334;
        pcVar6 = DAT_100ec334;
      }
      else {
        if (param_1 != (DWORD *)0x16) {
          return 0xffffffff;
        }
        puVar7 = &DAT_100ec338;
        pcVar6 = DAT_100ec338;
      }
      goto LAB_100109d4;
    }
    pDVar2 = FUN_1000caf1();
    uVar3 = FUN_10010ad0((int)param_1,pDVar2[0x14]);
    puVar7 = (undefined4 *)(uVar3 + 8);
    pcVar6 = (code *)*puVar7;
  }
  if (pcVar6 == (code *)0x1) {
    if (!bVar1) {
      return 0;
    }
    FUN_1000b32b(1);
    return 0;
  }
  if (pcVar6 == (code *)0x0) {
    if (bVar1) {
      FUN_1000b32b(1);
    }
                    /* WARNING: Subroutine does not return */
    __exit(3);
  }
  if (((param_1 == (DWORD *)0x8) || (param_1 == (DWORD *)0xb)) || (param_1 == (DWORD *)0x4)) {
    local_c = pDVar2[0x15];
    pDVar2[0x15] = 0;
    if (param_1 == (DWORD *)0x8) {
      local_10 = pDVar2[0x16];
      pDVar2[0x16] = 0x8c;
      goto LAB_10010a48;
    }
  }
  else {
LAB_10010a48:
    if (param_1 == (DWORD *)0x8) {
      if (DAT_10019778 < DAT_1001977c + DAT_10019778) {
        iVar4 = DAT_10019778 * 0xc;
        iVar5 = DAT_10019778;
        do {
          iVar4 = iVar4 + 0xc;
          *(undefined4 *)((pDVar2[0x14] - 4) + iVar4) = 0;
          iVar5 = iVar5 + 1;
        } while (iVar5 < DAT_1001977c + DAT_10019778);
      }
      goto LAB_10010a86;
    }
  }
  *puVar7 = 0;
LAB_10010a86:
  if (bVar1) {
    FUN_1000b32b(1);
  }
  if (param_1 == (DWORD *)0x8) {
    (*pcVar6)(8,pDVar2[0x16]);
  }
  else {
    (*pcVar6)(param_1);
    if ((param_1 != (DWORD *)0xb) && (param_1 != (DWORD *)0x4)) {
      return 0;
    }
  }
  pDVar2[0x15] = local_c;
  if (param_1 == (DWORD *)0x8) {
    pDVar2[0x16] = local_10;
  }
  return 0;
}

