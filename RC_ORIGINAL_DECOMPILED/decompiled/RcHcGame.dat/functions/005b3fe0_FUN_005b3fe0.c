/*
 * FUN_005b3fe0 at 005b3fe0
 * undefined FUN_005b3fe0(void)
 * Address ranges: 005b3fe0-005b42e6
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Removing unreachable block (ram,0x005b40b5) */
/* WARNING: Removing unreachable block (ram,0x005b40ed) */
/* WARNING: Removing unreachable block (ram,0x005b411c) */
/* WARNING: Removing unreachable block (ram,0x005b414f) */
/* WARNING: Removing unreachable block (ram,0x005b412b) */
/* WARNING: Removing unreachable block (ram,0x005b40f8) */
/* WARNING: Removing unreachable block (ram,0x005b40c9) */

int FUN_005b3fe0(void)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int local_3f4;
  undefined1 local_3e8 [1000];
  
  iVar3 = 0;
  local_3f4 = 0;
  iVar1 = FUN_005cd0a0(0,0,9);
  if (iVar1 == 0) {
    FUN_005cf220(0x72,&DAT_006b3f70,s_Eclipse_C__Genesis3D_OpenSource__006a9428 + 8,0x292,
                 &DAT_006b3f70,0);
  }
  else {
    iVar1 = FUN_005cd200(1);
    if (iVar1 == 0) {
      FUN_005cf220(0x72,&DAT_006b3f70,s_Eclipse_C__Genesis3D_OpenSource__006a9428 + 8,0x296,
                   &DAT_006b3f70,0);
    }
    else {
      local_3f4 = FUN_005b42f0();
      if (local_3f4 != 0) {
        FUN_005cd320();
        iVar3 = FUN_005cd200(9);
        if (iVar3 == 0) {
          FUN_005cf220(0x72,&DAT_006b3f70,s_Eclipse_C__Genesis3D_OpenSource__006a9428 + 8,0x2af,
                       &DAT_006b3f70,0);
          return 0;
        }
        if (*(int *)(local_3f4 + 8) < 1) {
          *(undefined4 *)(local_3f4 + 0xc) = 0;
        }
        else {
          uVar2 = FUN_005cf3b0(*(int *)(local_3f4 + 8) << 2);
          *(undefined4 *)(local_3f4 + 0xc) = uVar2;
          iVar1 = 0;
          if (0 < *(int *)(local_3f4 + 8)) {
            do {
              iVar1 = iVar1 + 1;
              *(undefined4 *)(*(int *)(local_3f4 + 0xc) + -4 + iVar1 * 4) = 0;
            } while (iVar1 < *(int *)(local_3f4 + 8));
          }
          iVar4 = 0;
          if (0 < *(int *)(local_3f4 + 8)) {
            do {
              FUN_0060d588(local_3e8,&DAT_00690818,iVar4);
              iVar1 = FUN_005cd200(1);
              if (iVar1 == 0) {
                FUN_005cf220(0x72,&DAT_006b3f70,s_Eclipse_C__Genesis3D_OpenSource__006a9428 + 8,
                             0x2be,&DAT_006b3f70,0);
                goto LAB_005b42ac;
              }
              uVar2 = FUN_005bdee0();
              *(undefined4 *)(*(int *)(local_3f4 + 0xc) + iVar4 * 4) = uVar2;
              if (*(int *)(*(int *)(local_3f4 + 0xc) + iVar4 * 4) == 0) {
                FUN_005cf220(0x72,&DAT_006b3f70,s_Eclipse_C__Genesis3D_OpenSource__006a9428 + 8,
                             0x2c1,&DAT_006b3f70,0);
                goto LAB_005b42a1;
              }
              FUN_005cd320();
              iVar4 = iVar4 + 1;
            } while (iVar4 < *(int *)(local_3f4 + 8));
          }
        }
        FUN_005cd320();
        FUN_005cd320();
        return local_3f4;
      }
      FUN_005cf220(0x72,&DAT_006b3f70,s_Eclipse_C__Genesis3D_OpenSource__006a9428 + 8,0x29a,
                   &DAT_006b3f70,0);
    }
LAB_005b42a1:
    if (iVar1 != 0) {
      FUN_005cd320();
    }
LAB_005b42ac:
    if (iVar3 != 0) {
      FUN_005cd320();
    }
    FUN_005cd320();
  }
  if (local_3f4 != 0) {
    FUN_005b3d60();
  }
  return 0;
}

