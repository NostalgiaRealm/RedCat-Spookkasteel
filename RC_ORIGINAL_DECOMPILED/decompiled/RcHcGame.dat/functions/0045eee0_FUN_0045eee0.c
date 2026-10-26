/*
 * FUN_0045eee0 at 0045eee0
 * undefined FUN_0045eee0(void)
 * Address ranges: 0045eee0-0045f03e
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __thiscall
FUN_0045eee0(int param_1,undefined4 *param_2,undefined4 *param_3,undefined4 param_4,
            undefined4 *param_5)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  float10 fVar4;
  
  if (*(char *)(param_1 + 0x7c) == '\0') {
    *(undefined1 *)(param_1 + 0x15b4) = 1;
    *(undefined4 *)(param_1 + 0x1560) = *param_3;
    puVar1 = (undefined4 *)(param_1 + 0x156c);
    *(undefined4 *)(param_1 + 0x1564) = param_3[1];
    *(undefined4 *)(param_1 + 0x1568) = param_3[2];
    *puVar1 = *param_2;
    *(undefined4 *)(param_1 + 0x1570) = param_2[1];
    uVar3 = param_2[2];
    *(undefined4 *)(param_1 + 0x15b8) = 0;
    *(undefined4 *)(param_1 + 0x1574) = uVar3;
    *(undefined4 *)(param_1 + 0x159c) = *puVar1;
    *(undefined4 *)(param_1 + 0x15a0) = *(undefined4 *)(param_1 + 0x1570);
    *(undefined4 *)(param_1 + 0x15a4) = *(undefined4 *)(param_1 + 0x1574);
    *(undefined4 *)(param_1 + 0x15a8) = *param_5;
    *(undefined4 *)(param_1 + 0x15ac) = param_5[1];
    *(undefined4 *)(param_1 + 0x15b0) = param_5[2];
    FUN_005b3080();
    puVar2 = (undefined4 *)(param_1 + 0x1584);
    FUN_005b2fe0(puVar2);
    *(undefined4 *)(param_1 + 0x1578) = *puVar2;
    *(undefined4 *)(param_1 + 0x157c) = *(undefined4 *)(param_1 + 0x1588);
    *(undefined4 *)(param_1 + 0x1580) = *(undefined4 *)(param_1 + 0x158c);
    FUN_005b2f20();
    FUN_005b15f0(puVar2);
    *(undefined4 *)(param_1 + 0x1590) = *puVar1;
    *(undefined4 *)(param_1 + 0x1594) = *(undefined4 *)(param_1 + 0x1570);
    *(undefined4 *)(param_1 + 0x1598) = *(undefined4 *)(param_1 + 0x1574);
    fVar4 = (float10)FUN_00409e30(param_4);
    FUN_005b3020((float)fVar4,(undefined4 *)(param_1 + 0x1590));
    FUN_005b2fe0(puVar2);
    FUN_00502350(1);
    FUN_004041b0(param_4);
    uVar3 = __ftol();
    FUN_004041b0(uVar3);
    *(undefined4 *)(param_1 + 0x15cc) = 0;
    return 1;
  }
  return 0;
}

