//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class CLLocation, CLSEKCalendar, CLSEKParticipant, NSArray, NSDate, NSString;

@interface CLSEKEvent : NSObject <NSCoding>
{
    BOOL _isBirthday;
    BOOL _allDay;
    BOOL _hasAttendees;
    BOOL _organizedByMe;
    BOOL _isSelfOrganized;
    BOOL _hasRecurrenceRules;
    BOOL _isSuggestedAndAccepted;
    NSString *_title;
    NSDate *_startDate;
    NSDate *_endDate;
    NSArray *_attendees;
    CLSEKParticipant *_selfAttendee;
    CLSEKCalendar *_calendar;
    NSString *_calendarItemIdentifier;
    struct CLLocationCoordinate2D _coordinate;
}

@property(readonly) struct CLLocationCoordinate2D coordinate; // @synthesize coordinate=_coordinate;
@property(readonly) BOOL isSuggestedAndAccepted; // @synthesize isSuggestedAndAccepted=_isSuggestedAndAccepted;
@property(readonly) BOOL hasRecurrenceRules; // @synthesize hasRecurrenceRules=_hasRecurrenceRules;
@property(readonly) BOOL isSelfOrganized; // @synthesize isSelfOrganized=_isSelfOrganized;
@property(readonly) NSString *calendarItemIdentifier; // @synthesize calendarItemIdentifier=_calendarItemIdentifier;
@property(readonly) CLSEKCalendar *calendar; // @synthesize calendar=_calendar;
@property(readonly) CLSEKParticipant *selfAttendee; // @synthesize selfAttendee=_selfAttendee;
@property(readonly) BOOL organizedByMe; // @synthesize organizedByMe=_organizedByMe;
@property(readonly) NSArray *attendees; // @synthesize attendees=_attendees;
@property(readonly) BOOL hasAttendees; // @synthesize hasAttendees=_hasAttendees;
@property(readonly, getter=isAllDay) BOOL allDay; // @synthesize allDay=_allDay;
@property(readonly) NSDate *endDate; // @synthesize endDate=_endDate;
@property(readonly) NSDate *startDate; // @synthesize startDate=_startDate;
@property(readonly) BOOL isBirthday; // @synthesize isBirthday=_isBirthday;
@property(readonly) NSString *title; // @synthesize title=_title;
// - (void).cxx_destruct;
- (id)description;
@property(readonly) CLLocation *geoLocation;
- (BOOL)isEqual:(id)arg1;
- (NSUInteger)hash;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithEKEvent:(id)arg1;

@end
