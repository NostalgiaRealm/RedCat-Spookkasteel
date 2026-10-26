/*
 * FUN_004aab60 at 004aab60
 * undefined FUN_004aab60(void)
 * Address ranges: 004aab60-004aadeb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Removing unreachable block (ram,0x004aac62) */
/* WARNING: Removing unreachable block (ram,0x004aabb2) */
/* WARNING: Removing unreachable block (ram,0x004aad1c) */

int FUN_004aab60(int param_1,int param_2,int param_3)

{
  uint uVar1;
  char cVar2;
  undefined1 *puVar3;
  uint uVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  
  if (param_1 == param_2) {
    return param_3;
  }
  puVar7 = (undefined4 *)(param_2 + 0x14);
  puVar10 = (undefined4 *)(param_3 + 0x14);
  do {
    uVar1 = puVar7[-0xf];
    puVar5 = puVar7 + -0xc;
    param_2 = param_2 + -0x30;
    param_3 = param_3 + -0x30;
    puVar8 = puVar10 + -0xc;
    if (param_3 == param_2) {
      FUN_0040c9b0(uVar1,0xffffffff);
      FUN_0040c9b0(0,0);
    }
    else {
      if (uVar1 != 0) {
        puVar3 = (undefined1 *)puVar7[-0x10];
        if (puVar3 == (undefined1 *)0x0) {
          puVar3 = &DAT_0064a3b4;
        }
        if ((byte)puVar3[-1] < 0xfe) {
          FUN_004040a0(1);
          puVar3 = (undefined1 *)puVar7[-0x10];
          if (puVar3 == (undefined1 *)0x0) {
            puVar3 = &DAT_0064a3b4;
          }
          puVar10[-0x10] = puVar3;
          puVar10[-0xf] = puVar7[-0xf];
          puVar10[-0xe] = puVar7[-0xe];
          puVar3[-1] = puVar3[-1] + '\x01';
          goto LAB_004aac54;
        }
      }
      cVar2 = FUN_00401940(uVar1,1);
      if (cVar2 != '\0') {
        puVar6 = (undefined4 *)puVar7[-0x10];
        if (puVar6 == (undefined4 *)0x0) {
          puVar6 = (undefined4 *)&DAT_0064a3b4;
        }
        puVar9 = (undefined4 *)puVar10[-0x10];
        for (uVar4 = uVar1 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
          *puVar9 = *puVar6;
          puVar6 = puVar6 + 1;
          puVar9 = puVar9 + 1;
        }
        for (uVar4 = uVar1 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
          *(undefined1 *)puVar9 = *(undefined1 *)puVar6;
          puVar6 = (undefined4 *)((int)puVar6 + 1);
          puVar9 = (undefined4 *)((int)puVar9 + 1);
        }
        FUN_00404190(uVar1);
      }
    }
LAB_004aac54:
    uVar1 = puVar7[-0xb];
    if (puVar10 + -0xd == puVar7 + -0xd) {
      FUN_0040c9b0(uVar1,0xffffffff);
      FUN_0040c9b0(0,0);
    }
    else {
      if (uVar1 != 0) {
        puVar3 = (undefined1 *)*puVar5;
        if (puVar3 == (undefined1 *)0x0) {
          puVar3 = &DAT_0064a3b4;
        }
        if ((byte)puVar3[-1] < 0xfe) {
          FUN_004040a0(1);
          puVar3 = (undefined1 *)*puVar5;
          if (puVar3 == (undefined1 *)0x0) {
            puVar3 = &DAT_0064a3b4;
          }
          *puVar8 = puVar3;
          puVar10[-0xb] = puVar7[-0xb];
          puVar10[-10] = puVar7[-10];
          puVar3[-1] = puVar3[-1] + '\x01';
          goto LAB_004aad0e;
        }
      }
      cVar2 = FUN_00401940(uVar1,1);
      if (cVar2 != '\0') {
        puVar6 = (undefined4 *)*puVar5;
        if (puVar6 == (undefined4 *)0x0) {
          puVar6 = (undefined4 *)&DAT_0064a3b4;
        }
        puVar9 = (undefined4 *)*puVar8;
        for (uVar4 = uVar1 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
          *puVar9 = *puVar6;
          puVar6 = puVar6 + 1;
          puVar9 = puVar9 + 1;
        }
        for (uVar4 = uVar1 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
          *(undefined1 *)puVar9 = *(undefined1 *)puVar6;
          puVar6 = (undefined4 *)((int)puVar6 + 1);
          puVar9 = (undefined4 *)((int)puVar9 + 1);
        }
        FUN_00404190(uVar1);
      }
    }
LAB_004aad0e:
    uVar1 = puVar7[-7];
    if (puVar10 + -9 == puVar7 + -9) {
      FUN_0040c9b0(uVar1,0xffffffff);
      FUN_0040c9b0(0,0);
    }
    else {
      if (uVar1 != 0) {
        puVar3 = (undefined1 *)puVar7[-8];
        if (puVar3 == (undefined1 *)0x0) {
          puVar3 = &DAT_0064a3b4;
        }
        if ((byte)puVar3[-1] < 0xfe) {
          FUN_004040a0(1);
          puVar3 = (undefined1 *)puVar7[-8];
          if (puVar3 == (undefined1 *)0x0) {
            puVar3 = &DAT_0064a3b4;
          }
          puVar10[-8] = puVar3;
          puVar10[-7] = puVar7[-7];
          puVar10[-6] = puVar7[-6];
          puVar3[-1] = puVar3[-1] + '\x01';
          goto LAB_004aadc8;
        }
      }
      cVar2 = FUN_00401940(uVar1,1);
      if (cVar2 != '\0') {
        puVar7 = (undefined4 *)puVar7[-8];
        if (puVar7 == (undefined4 *)0x0) {
          puVar7 = (undefined4 *)&DAT_0064a3b4;
        }
        puVar10 = (undefined4 *)puVar10[-8];
        for (uVar4 = uVar1 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
          *puVar10 = *puVar7;
          puVar7 = puVar7 + 1;
          puVar10 = puVar10 + 1;
        }
        for (uVar4 = uVar1 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
          *(undefined1 *)puVar10 = *(undefined1 *)puVar7;
          puVar7 = (undefined4 *)((int)puVar7 + 1);
          puVar10 = (undefined4 *)((int)puVar10 + 1);
        }
        FUN_00404190(uVar1);
      }
    }
LAB_004aadc8:
    puVar7 = puVar5;
    puVar10 = puVar8;
    if (param_2 == param_1) {
      return param_3;
    }
  } while( true );
}

