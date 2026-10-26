/*
 * FUN_0046e8b0 at 0046e8b0
 * undefined FUN_0046e8b0(void)
 * Address ranges: 0046e8b0-0046e9e1
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_0046e8b0(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  int local_5c;
  undefined4 local_54;
  undefined4 local_50;
  int local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined1 local_30 [36];
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  FUN_004247e0();
  FUN_005b3af0();
  FUN_0059b1e0();
  iVar1 = FUN_005b7140();
  iVar3 = 0;
  local_50 = 0;
  local_4c = param_1 + 0x13fc;
  local_54 = 0;
  local_5c = 0;
  puVar2 = (undefined4 *)(param_1 + 0x100);
  do {
    FUN_0047e710();
    if (iVar1 + -1 <= iVar3) {
      iVar3 = 0;
    }
    FUN_005b7150(&local_50,local_30,&local_54);
    local_48 = local_c;
    local_3c = local_c;
    iVar3 = iVar3 + 2;
    local_44 = local_8;
    local_40 = local_4;
    local_38 = local_8;
    local_34 = local_4;
    FUN_005b2f20();
    FUN_005b2fa0(0x41a00000);
    FUN_005b2fa0((float)local_5c * 0.5);
    FUN_005b3000(&local_48);
    local_5c = local_5c + 1;
    *puVar2 = local_48;
    puVar2[1] = local_44;
    puVar2[2] = local_40;
    puVar2[3] = local_3c;
    puVar2[4] = local_38;
    puVar2[5] = local_34;
    puVar2 = puVar2 + 0x51;
  } while (local_5c < 0xf);
  return;
}

