/*
 * FUN_005b42f0 at 005b42f0
 * undefined FUN_005b42f0(void)
 * Address ranges: 005b42f0-005b4499
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_005b42f0(void)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int local_8;
  int local_4;
  
  iVar1 = FUN_005cd390(4);
  if (iVar1 == 0) {
    FUN_005cf220(0x72,&DAT_006b3f70,s_Eclipse_C__Genesis3D_OpenSource__006a9428 + 8,0x247,
                 &DAT_006b3f70,0);
    return 0;
  }
  if (local_8 != 0x52544341) {
    FUN_005cf220(0x72,&DAT_006b3f70,s_Eclipse_C__Genesis3D_OpenSource__006a9428 + 8,0x249,
                 &DAT_006b3f70,0);
    return 0;
  }
  iVar1 = FUN_005cd390(4);
  if (iVar1 == 0) {
    FUN_005cf220(0x72,&DAT_006b3f70,s_Eclipse_C__Genesis3D_OpenSource__006a9428 + 8,0x24c,
                 &DAT_006b3f70,0);
    return 0;
  }
  if (local_4 != 0xf1) {
    FUN_005cf220(0x72,&DAT_006b3f70,s_Eclipse_C__Genesis3D_OpenSource__006a9428 + 8,0x24e,
                 &DAT_006b3f70,0);
    return 0;
  }
  iVar1 = FUN_005b3b20();
  if (iVar1 == 0) {
    FUN_005cf220(0x6e,&DAT_006b3f70,s_Eclipse_C__Genesis3D_OpenSource__006a9428 + 8,0x252,
                 &DAT_006b3f70,0);
    return 0;
  }
  uVar2 = FUN_005cd310();
  *(undefined4 *)(iVar1 + 4) = uVar2;
  iVar3 = FUN_005cd390(4);
  if (iVar3 == 0) {
    FUN_005cf220(0x72,&DAT_006b3f70,s_Eclipse_C__Genesis3D_OpenSource__006a9428 + 8,600,
                 &DAT_006b3f70,0);
    FUN_005b3d60();
    return 0;
  }
  iVar3 = FUN_005cd390(4);
  if (iVar3 == 0) {
    FUN_005cf220(0x72,&DAT_006b3f70,s_Eclipse_C__Genesis3D_OpenSource__006a9428 + 8,0x25b,
                 &DAT_006b3f70,0);
    FUN_005b3d60();
    return 0;
  }
  return iVar1;
}

