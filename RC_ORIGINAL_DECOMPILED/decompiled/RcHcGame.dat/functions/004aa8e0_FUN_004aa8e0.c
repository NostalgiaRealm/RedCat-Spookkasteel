/*
 * FUN_004aa8e0 at 004aa8e0
 * undefined FUN_004aa8e0(void)
 * Address ranges: 004aa8e0-004aab58
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Removing unreachable block (ram,0x004aa9cd) */
/* WARNING: Removing unreachable block (ram,0x004aa918) */
/* WARNING: Removing unreachable block (ram,0x004aaa87) */

void FUN_004aa8e0(int param_1,int param_2,int param_3)

{
  uint uVar1;
  char cVar2;
  undefined1 *puVar3;
  uint uVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  
  if (param_1 != param_2) {
    puVar6 = (undefined4 *)(param_1 + 0x14);
    do {
      uVar1 = *(uint *)(param_3 + 8);
      if (param_1 == param_3) {
        FUN_0040c9b0(uVar1,0xffffffff);
        FUN_0040c9b0(0,0);
      }
      else {
        if (uVar1 != 0) {
          puVar3 = *(undefined1 **)(param_3 + 4);
          if (puVar3 == (undefined1 *)0x0) {
            puVar3 = &DAT_0064a3b4;
          }
          if ((byte)puVar3[-1] < 0xfe) {
            FUN_004040a0(1);
            puVar3 = *(undefined1 **)(param_3 + 4);
            if (puVar3 == (undefined1 *)0x0) {
              puVar3 = &DAT_0064a3b4;
            }
            puVar6[-4] = puVar3;
            puVar6[-3] = *(undefined4 *)(param_3 + 8);
            puVar6[-2] = *(undefined4 *)(param_3 + 0xc);
            puVar3[-1] = puVar3[-1] + '\x01';
            goto LAB_004aa9bc;
          }
        }
        cVar2 = FUN_00401940(uVar1,1);
        if (cVar2 != '\0') {
          puVar5 = *(undefined4 **)(param_3 + 4);
          if (puVar5 == (undefined4 *)0x0) {
            puVar5 = (undefined4 *)&DAT_0064a3b4;
          }
          puVar7 = (undefined4 *)puVar6[-4];
          for (uVar4 = uVar1 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
            *puVar7 = *puVar5;
            puVar5 = puVar5 + 1;
            puVar7 = puVar7 + 1;
          }
          for (uVar4 = uVar1 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
            *(undefined1 *)puVar7 = *(undefined1 *)puVar5;
            puVar5 = (undefined4 *)((int)puVar5 + 1);
            puVar7 = (undefined4 *)((int)puVar7 + 1);
          }
          FUN_00404190(uVar1);
        }
      }
LAB_004aa9bc:
      uVar1 = *(uint *)(param_3 + 0x18);
      if (puVar6 + -1 == (undefined4 *)(param_3 + 0x10)) {
        FUN_0040c9b0(uVar1,0xffffffff);
        FUN_0040c9b0(0,0);
      }
      else {
        if (uVar1 != 0) {
          puVar3 = *(undefined1 **)(param_3 + 0x14);
          if (puVar3 == (undefined1 *)0x0) {
            puVar3 = &DAT_0064a3b4;
          }
          if ((byte)puVar3[-1] < 0xfe) {
            FUN_004040a0(1);
            puVar3 = *(undefined1 **)(param_3 + 0x14);
            if (puVar3 == (undefined1 *)0x0) {
              puVar3 = &DAT_0064a3b4;
            }
            *puVar6 = puVar3;
            puVar6[1] = *(undefined4 *)(param_3 + 0x18);
            puVar6[2] = *(undefined4 *)(param_3 + 0x1c);
            puVar3[-1] = puVar3[-1] + '\x01';
            goto LAB_004aaa75;
          }
        }
        cVar2 = FUN_00401940(uVar1,1);
        if (cVar2 != '\0') {
          puVar5 = *(undefined4 **)(param_3 + 0x14);
          if (puVar5 == (undefined4 *)0x0) {
            puVar5 = (undefined4 *)&DAT_0064a3b4;
          }
          puVar7 = (undefined4 *)*puVar6;
          for (uVar4 = uVar1 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
            *puVar7 = *puVar5;
            puVar5 = puVar5 + 1;
            puVar7 = puVar7 + 1;
          }
          for (uVar4 = uVar1 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
            *(undefined1 *)puVar7 = *(undefined1 *)puVar5;
            puVar5 = (undefined4 *)((int)puVar5 + 1);
            puVar7 = (undefined4 *)((int)puVar7 + 1);
          }
          FUN_00404190(uVar1);
        }
      }
LAB_004aaa75:
      uVar1 = *(uint *)(param_3 + 0x28);
      if (puVar6 + 3 == (undefined4 *)(param_3 + 0x20)) {
        FUN_0040c9b0(uVar1,0xffffffff);
        FUN_0040c9b0(0,0);
      }
      else {
        if (uVar1 != 0) {
          puVar3 = *(undefined1 **)(param_3 + 0x24);
          if (puVar3 == (undefined1 *)0x0) {
            puVar3 = &DAT_0064a3b4;
          }
          if ((byte)puVar3[-1] < 0xfe) {
            FUN_004040a0(1);
            puVar3 = *(undefined1 **)(param_3 + 0x24);
            if (puVar3 == (undefined1 *)0x0) {
              puVar3 = &DAT_0064a3b4;
            }
            puVar6[4] = puVar3;
            puVar6[5] = *(undefined4 *)(param_3 + 0x28);
            puVar6[6] = *(undefined4 *)(param_3 + 0x2c);
            puVar3[-1] = puVar3[-1] + '\x01';
            goto LAB_004aab31;
          }
        }
        cVar2 = FUN_00401940(uVar1,1);
        if (cVar2 != '\0') {
          puVar5 = *(undefined4 **)(param_3 + 0x24);
          if (puVar5 == (undefined4 *)0x0) {
            puVar5 = (undefined4 *)&DAT_0064a3b4;
          }
          puVar7 = (undefined4 *)puVar6[4];
          for (uVar4 = uVar1 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
            *puVar7 = *puVar5;
            puVar5 = puVar5 + 1;
            puVar7 = puVar7 + 1;
          }
          for (uVar4 = uVar1 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
            *(undefined1 *)puVar7 = *(undefined1 *)puVar5;
            puVar5 = (undefined4 *)((int)puVar5 + 1);
            puVar7 = (undefined4 *)((int)puVar7 + 1);
          }
          FUN_00404190(uVar1);
        }
      }
LAB_004aab31:
      param_1 = param_1 + 0x30;
      puVar6 = puVar6 + 0xc;
    } while (param_1 != param_2);
  }
  return;
}

