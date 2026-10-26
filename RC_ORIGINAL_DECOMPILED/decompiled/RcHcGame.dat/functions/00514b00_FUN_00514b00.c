/*
 * FUN_00514b00 at 00514b00
 * undefined FUN_00514b00(void)
 * Address ranges: 00514b00-00514d94
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Removing unreachable block (ram,0x00514bed) */
/* WARNING: Removing unreachable block (ram,0x00514b3d) */
/* WARNING: Removing unreachable block (ram,0x00514ca9) */

int FUN_00514b00(int param_1,int param_2,int param_3)

{
  uint uVar1;
  char cVar2;
  undefined1 *puVar3;
  uint uVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  
  if (param_1 == param_2) {
    return param_3;
  }
  puVar5 = (undefined4 *)(param_1 + 0x14);
  puVar7 = (undefined4 *)(param_3 + 0x14);
  do {
    uVar1 = puVar5[-3];
    if (param_3 == param_1) {
      FUN_0040c9b0(uVar1,0xffffffff);
      FUN_0040c9b0(0,0);
    }
    else {
      if (uVar1 != 0) {
        puVar3 = (undefined1 *)puVar5[-4];
        if (puVar3 == (undefined1 *)0x0) {
          puVar3 = &DAT_0064a3b4;
        }
        if ((byte)puVar3[-1] < 0xfe) {
          FUN_004040a0(1);
          puVar3 = (undefined1 *)puVar5[-4];
          if (puVar3 == (undefined1 *)0x0) {
            puVar3 = &DAT_0064a3b4;
          }
          puVar7[-4] = puVar3;
          puVar7[-3] = puVar5[-3];
          puVar7[-2] = puVar5[-2];
          puVar3[-1] = puVar3[-1] + '\x01';
          goto LAB_00514bdf;
        }
      }
      cVar2 = FUN_00401940(uVar1,1);
      if (cVar2 != '\0') {
        puVar6 = (undefined4 *)puVar5[-4];
        if (puVar6 == (undefined4 *)0x0) {
          puVar6 = (undefined4 *)&DAT_0064a3b4;
        }
        puVar8 = (undefined4 *)puVar7[-4];
        for (uVar4 = uVar1 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
          *puVar8 = *puVar6;
          puVar6 = puVar6 + 1;
          puVar8 = puVar8 + 1;
        }
        for (uVar4 = uVar1 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
          *(undefined1 *)puVar8 = *(undefined1 *)puVar6;
          puVar6 = (undefined4 *)((int)puVar6 + 1);
          puVar8 = (undefined4 *)((int)puVar8 + 1);
        }
        FUN_00404190(uVar1);
      }
    }
LAB_00514bdf:
    uVar1 = puVar5[1];
    if (puVar7 + -1 == puVar5 + -1) {
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
          *puVar7 = puVar3;
          puVar7[1] = puVar5[1];
          puVar7[2] = puVar5[2];
          puVar3[-1] = puVar3[-1] + '\x01';
          goto LAB_00514c9b;
        }
      }
      cVar2 = FUN_00401940(uVar1,1);
      if (cVar2 != '\0') {
        puVar6 = (undefined4 *)*puVar5;
        if (puVar6 == (undefined4 *)0x0) {
          puVar6 = (undefined4 *)&DAT_0064a3b4;
        }
        puVar8 = (undefined4 *)*puVar7;
        for (uVar4 = uVar1 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
          *puVar8 = *puVar6;
          puVar6 = puVar6 + 1;
          puVar8 = puVar8 + 1;
        }
        for (uVar4 = uVar1 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
          *(undefined1 *)puVar8 = *(undefined1 *)puVar6;
          puVar6 = (undefined4 *)((int)puVar6 + 1);
          puVar8 = (undefined4 *)((int)puVar8 + 1);
        }
        FUN_00404190(uVar1);
      }
    }
LAB_00514c9b:
    uVar1 = puVar5[5];
    if (puVar7 + 3 == puVar5 + 3) {
      FUN_0040c9b0(uVar1,0xffffffff);
      FUN_0040c9b0(0,0);
    }
    else {
      if (uVar1 != 0) {
        puVar3 = (undefined1 *)puVar5[4];
        if (puVar3 == (undefined1 *)0x0) {
          puVar3 = &DAT_0064a3b4;
        }
        if ((byte)puVar3[-1] < 0xfe) {
          FUN_004040a0(1);
          puVar3 = (undefined1 *)puVar5[4];
          if (puVar3 == (undefined1 *)0x0) {
            puVar3 = &DAT_0064a3b4;
          }
          puVar7[4] = puVar3;
          puVar7[5] = puVar5[5];
          puVar7[6] = puVar5[6];
          puVar3[-1] = puVar3[-1] + '\x01';
          goto LAB_00514d55;
        }
      }
      cVar2 = FUN_00401940(uVar1,1);
      if (cVar2 != '\0') {
        puVar6 = (undefined4 *)puVar5[4];
        if (puVar6 == (undefined4 *)0x0) {
          puVar6 = (undefined4 *)&DAT_0064a3b4;
        }
        puVar8 = (undefined4 *)puVar7[4];
        for (uVar4 = uVar1 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
          *puVar8 = *puVar6;
          puVar6 = puVar6 + 1;
          puVar8 = puVar8 + 1;
        }
        for (uVar4 = uVar1 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
          *(undefined1 *)puVar8 = *(undefined1 *)puVar6;
          puVar6 = (undefined4 *)((int)puVar6 + 1);
          puVar8 = (undefined4 *)((int)puVar8 + 1);
        }
        FUN_00404190(uVar1);
      }
    }
LAB_00514d55:
    param_3 = param_3 + 0x30;
    puVar7 = puVar7 + 0xc;
    param_1 = param_1 + 0x30;
    puVar5 = puVar5 + 0xc;
    if (param_1 == param_2) {
      return param_3;
    }
  } while( true );
}

