/*
 * FUN_0047c2b0 at 0047c2b0
 * undefined FUN_0047c2b0(void)
 * Address ranges: 0047c2b0-0047c572
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_0047c2b0(int param_1,int param_2)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  bool bVar6;
  float fVar7;
  uint local_1c;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  bVar6 = false;
  local_1c = 0;
  if ((*(char *)(param_1 + 0x3f8) != '\0') && (*(char *)(param_1 + 0x406) != '\0')) {
    iVar5 = *(int *)(param_1 + 0x4ae4);
    bVar1 = true;
    if (iVar5 != -1) {
      iVar2 = *(int *)(param_1 + 0x4ae8);
      if (iVar2 == -1) {
        *(undefined4 *)(param_1 + 0x4aec) = 0x3f800000;
        *(int *)(param_1 + 0x4ae8) = iVar5 + param_2;
      }
      else if (iVar2 < param_2) {
        *(undefined4 *)(param_1 + 0x4aec) = 0;
        bVar1 = false;
      }
      else if (iVar5 < 1) {
        *(undefined4 *)(param_1 + 0x4aec) = 0;
      }
      else {
        *(float *)(param_1 + 0x4aec) = (float)(iVar2 - param_2) / (float)iVar5;
      }
    }
    *(bool *)(param_1 + 0x4af0) = bVar1;
    if (bVar1) {
      iVar5 = *(int *)(param_1 + 0x4af4);
      bVar1 = true;
      if (iVar5 != -1) {
        iVar2 = *(int *)(param_1 + 0x4af8);
        if (iVar2 == -1) {
          *(undefined4 *)(param_1 + 0x4afc) = 0x3f800000;
          *(int *)(param_1 + 0x4af8) = iVar5 + param_2;
        }
        else if (iVar2 < param_2) {
          *(undefined4 *)(param_1 + 0x4afc) = 0;
          bVar1 = false;
        }
        else if (iVar5 < 1) {
          *(undefined4 *)(param_1 + 0x4afc) = 0;
        }
        else {
          *(float *)(param_1 + 0x4afc) = (float)(iVar2 - param_2) / (float)iVar5;
        }
      }
      *(bool *)(param_1 + 0x4b00) = bVar1;
      if (bVar1) {
        return;
      }
    }
    iVar5 = param_1 + 0x548;
    do {
      if (0x31 < (int)local_1c) {
        return;
      }
      if (*(char *)(iVar5 + 0x6c) == '\0') {
        FUN_0047e710();
        *(undefined4 *)(iVar5 + 4) = *(undefined4 *)(param_1 + 0x390);
        *(undefined4 *)(iVar5 + 8) = *(undefined4 *)(param_1 + 0x394);
        *(undefined4 *)(iVar5 + 0xc) = *(undefined4 *)(param_1 + 0x398);
        iVar2 = FUN_0060a4a0();
        iVar3 = FUN_0060a4a0();
        fVar7 = (float)(iVar3 % 10000) * 0.0001;
        iVar3 = FUN_0060a4a0();
        uVar4 = local_1c & 0x80000003;
        bVar6 = uVar4 == 0;
        if ((int)uVar4 < 0) {
          bVar6 = (uVar4 - 1 | 0xfffffffc) == 0xffffffff;
        }
        if (!bVar6) {
          fVar7 = -fVar7;
        }
        FUN_005b2e20((float)(iVar2 % 10000) * 0.0002 - 1.0,fVar7,
                     (float)(iVar3 % 10000) * 0.0002 - 1.0);
        FUN_005b2fa0(0x41f00000);
        *(undefined4 *)(iVar5 + 0x10) = local_c;
        *(undefined4 *)(iVar5 + 0x14) = local_8;
        *(undefined4 *)(iVar5 + 0x18) = local_4;
        iVar2 = *(int *)(param_1 + 0x4ae4);
        bVar6 = true;
        if (iVar2 != -1) {
          iVar3 = *(int *)(param_1 + 0x4ae8);
          if (iVar3 == -1) {
            *(undefined4 *)(param_1 + 0x4aec) = 0x3f800000;
            *(int *)(param_1 + 0x4ae8) = iVar2 + param_2;
          }
          else if (iVar3 < param_2) {
            *(undefined4 *)(param_1 + 0x4aec) = 0;
            bVar6 = false;
          }
          else if (iVar2 < 1) {
            *(undefined4 *)(param_1 + 0x4aec) = 0;
          }
          else {
            *(float *)(param_1 + 0x4aec) = (float)(iVar3 - param_2) / (float)iVar2;
          }
        }
        *(bool *)(param_1 + 0x4af0) = bVar6;
        if (bVar6) {
          FUN_004041b0(*(undefined4 *)(param_1 + 0x4b18));
          FUN_0047c580(5);
          FUN_0047d2f0(2);
        }
        else {
          FUN_004041b0(*(undefined4 *)(param_1 + 0x4b14));
        }
        bVar6 = true;
      }
      local_1c = local_1c + 1;
      iVar5 = iVar5 + 0x144;
    } while (!bVar6);
  }
  return;
}

