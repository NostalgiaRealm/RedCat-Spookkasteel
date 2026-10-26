/*
 * FUN_00562300 at 00562300
 * undefined __register FUN_00562300(int * param_1)
 * Address ranges: 00562300-00562373
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x561588 slot 45 for TMediaPlayer. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x561588 slot 45 for
   TMediaPlayer. Original bytes unchanged; names and types still inferred. */

void FUN_00562300(int *param_1)

{
  int *piVar1;
  byte bVar2;
  int iVar3;
  
  piVar1 = (int *)param_1[0x7c];
  FUN_0041c434((int *)piVar1[5],'\x01');
  FUN_0041c034((int *)piVar1[4],0x80000006);
  FUN_0041c140((int *)piVar1[4],1);
  FUN_0041cb34(piVar1,0,0,param_1[0xf],param_1[0xe]);
  iVar3 = 0;
  bVar2 = 0;
  do {
    if ((char)param_1[(uint)bVar2 * 4 + 0x7e] != '\0') {
      FUN_00562004(param_1,bVar2,iVar3);
      iVar3 = iVar3 + param_1[0xa9] + -1;
    }
    bVar2 = bVar2 + 1;
  } while (bVar2 != 9);
  return;
}

