#include <stdio.h>
#include <string.h>
#include <stdlib.h>
<<<<<<< HEAD
#include <time.h>

#include "define.h"

void doMove( struct Position* pos, Move* move )
{
    Board From = GetFrom( move[0] );
    Board To = GetTo( move[0] );
    Board Pro = GetPro( move[0] );
    Piece Cap = pos->board[To];
    move[0] |= AddCap( Cap );
    
    if( GetDrop( move[i] ) )
    {
        pos->board[To] = From;
        
        switch( pos->color )
        {
            case Black:
            pos->boardCol_b[To] = 1;
            pos->piecePos[ pieceStock[ From ][ pieceStock[From][0] ] ] = To;
            pos->boardNum[To] = pieceStock[ From ][ pieceStock[From][0] ];
            pos->pieceStock[From][ pieceStock[From][0] ] ] = 0;
            pos->pieceStock[From][0] -= 1;
            pos->b_hand[From] -= 1;
            if( From == SFU ) Is2FU_b^=Add2FU(To%16);
            break;
            
            case White:
            From -= 15;
            pos->boardCol_w[To] = 1;
            pos->piecePos[ pieceStock[ From ][ pieceStock[From][0] ] ] = To;
            pos->boardNum[To] = pieceStock[ From ][ pieceStock[From][0] ];
            pos->pieceStock[From][ pieceStock[From][0] ] ] = 0;
            pos->pieceStock[From][0] -= 1;
            pos->w_hand[From] -= 1;
            if( From == EFU ) Is2FU_w^=Add2FU(To%16);
            break;
        }
    }
    else
    {
        switch( pos->color )
        {
            case Black:
            pos->boardCol_b[From] = 0;
            pos->boardCol_b[ To ] = 1;
            if( Cap )
            {
                pos->boardCol_w[ To ] = 0;
                if( ETO<=Cap ) { Cap-=23; }
                else{ Cap-=15; }
                pos->pieceStock[Cap][0]++; 
                pos->pieceStock[Cap][pos->pieceStock[Cap][0]] = pos->boardNum[To];
                pos->piecePos[ boardNum[To] ] = 0;
                pos->b_hand[Cap]++;
            }
            break;
            
            case White:
            pos->boardCol_w[From] = 0;
            pos->boardCol_w[ To ] = 1;
            if( Cap )
            {
                pos->boardCol_b[ To ] = 0;
                if( STO<=Cap ) { Cap-=8; }
                pos->pieceStock[Cap][0]++; 
                pos->pieceStock[Cap][pos->pieceStock[Cap][0]] = pos->boardNum[To];
                pos->piecePos[ boardNum[To] ] = 0;
                pos->w_hand[Cap]++;
            }
            break;
        }
        
        pos->board[ To ] = pos->board[From];
        pos->piecePos[ pos->boardNum[From] ]
        pos->boardNum[ To ] = pos->boardNum[From];
        pos->boardNum[From] = 0;
        pos->board[From] = EMP;
        
    }
}

void undoMove(){
    
}