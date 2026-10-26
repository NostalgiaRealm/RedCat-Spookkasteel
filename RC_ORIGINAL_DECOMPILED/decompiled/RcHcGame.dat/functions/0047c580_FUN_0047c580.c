/*
 * FUN_0047c580 at 0047c580
 * undefined FUN_0047c580(void)
 * Address ranges: 0047c580-0047c70f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_0047c580(int param_1,int param_2)

{
  int iVar1;
  undefined1 *puVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  bool bVar8;
  float fVar9;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  iVar1 = DAT_006b915c;
  if (DAT_006b915c == 0) {
    iVar1 = FUN_004bc480();
  }
  iVar3 = *(int *)(iVar1 + 0x4e8);
  if (iVar3 == -0x80000000) {
    puVar2 = *(undefined1 **)(iVar1 + 0x49c);
    if (puVar2 == (undefined1 *)0x0) {
      puVar2 = &DAT_0064a3b4;
    }
    iVar3 = FUN_0060af10(puVar2);
    *(int *)(iVar1 + 0x4e8) = iVar3;
  }
  if (iVar3 == 0) {
    iVar1 = 0;
    if ((param_2 < 1) || (0x31 < param_2)) {
      param_2 = 0x32;
    }
    uVar7 = 0;
    iVar3 = param_1 + 0x548;
    do {
      if (param_2 <= iVar1) {
        return;
      }
      if (*(char *)(iVar3 + 0x6c) == '\0') {
        iVar4 = FUN_0060a4a0();
        iVar5 = FUN_0060a4a0();
        fVar9 = (float)(iVar5 % 10000) * 0.0001;
        iVar5 = FUN_0060a4a0();
        uVar6 = uVar7 & 0x80000003;
        bVar8 = uVar6 == 0;
        if ((int)uVar6 < 0) {
          bVar8 = (uVar6 - 1 | 0xfffffffc) == 0xffffffff;
        }
        if (bVar8) {
          fVar9 = -fVar9;
        }
        FUN_005b2e20((float)(iVar4 % 10000) * 0.0002 - 1.0,fVar9,
                     (float)(iVar5 % 10000) * 0.0002 - 1.0);
        FUN_005b2fa0(0x42dc0000);
        FUN_0047e710();
        iVar1 = iVar1 + 1;
        *(undefined4 *)(iVar3 + 4) = *(undefined4 *)(param_1 + 0x4b20);
        *(undefined4 *)(iVar3 + 8) = *(undefined4 *)(param_1 + 0x4b24);
        *(undefined4 *)(iVar3 + 0xc) = *(undefined4 *)(param_1 + 0x4b28);
        *(undefined4 *)(iVar3 + 0x10) = local_c;
        *(undefined4 *)(iVar3 + 0x14) = local_8;
        *(undefined4 *)(iVar3 + 0x18) = local_4;
      }
      uVar7 = uVar7 + 1;
      iVar3 = iVar3 + 0x144;
    } while ((int)uVar7 < 0x32);
  }
  return;
}

